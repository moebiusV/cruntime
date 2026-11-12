# cruntime

Everything a linker needs from a target system to cross compile for it with LLVM: the system's **headers**, its
**start files** (crt0.o, crt1.o, crtbegin.o ...), its **C library**, libm and libgcc/compiler-rt, one directory per
operating system, release and architecture, each laid out as a `--sysroot`.  It was started by the
[IMP72](https://github.com/moebiusV/imp72) compiler project, which needs it to build programs for other systems
with one command, but nothing in it is specific to IMP72: any project that cross compiles (clang, lld, zig cc,
rustc, a Makefile of your own) can take a directory and use it, without installing a cross toolchain or a virtual
machine for each system.

## Layout

    OS/ARCH               windows/x86_64
    OS/RELEASE/ARCH       linux/debian13/aarch64   linux/alpine322/x86_64   openbsd/v80/x86_64   freebsd/v151/x86_64

A system with releases has the release in the path (linux/debian13 is glibc on Debian 13, linux/alpine322 is musl
on Alpine 3.22, v151 is FreeBSD 15.1, v80 OpenBSD 8.0).  Each directory is complete by itself:

    usr/include       the system's own header files
    usr/lib           the start files, the C library, libm, libgcc (or compiler-rt), the linker scripts
    lib, libexec      the shared libraries and loaders the linker scripts name (where the system has them)
    usr/share/doc     the license files of the packages (where the system has them)
    imp-meta          what it was made from: the packages or sets, their versions and SHA-256 sums

| OS | Architectures | C library | From |
|---|---|---|---|
| linux/debian13 | x86_64 aarch64 armv7 arm i386 riscv64 s390x ppc64le | glibc | Debian 13 packages |
| linux/alpine322 | x86_64 aarch64 armv7 i386 riscv64 s390x ppc64le loongarch64 | musl | Alpine 3.22 packages |
| windows | x86_64 i386 | msvcrt | mingw-w64 (Debian packages) |
| freebsd | x86_64 aarch64 (15.1), i386 (14.5) | FreeBSD libc | base.txz of the release |
| openbsd | x86_64 aarch64 (8.0) | OpenBSD libc | base set of the release |
| netbsd | x86_64 (11.1) | NetBSD libc | base and comp sets of the release |

**macOS is not here**, and why is under Licenses below.  The tool that made these directories can still make it on
your machine: `imp-sysroot x86_64-apple-darwin` fetches the Darwin headers and the libSystem stub from the Zig
project, or `--apple-sdk DIR` uses the SDK of a Mac (`xcrun --show-sdk-path`).  Also not here: Cygwin (untested) and
the Debian ports Debian 13 has dropped (mips, mipsel, mips64el).  Add a system by making its directory the same
way (a pull request with the recipe).

Nothing is written by hand: each directory is made by `imp-sysroot` (tools/imp-sysroot of the IMP72 repository, a
POSIX shell script that does not need IMP72) from the system's own packages, checked against the checksums of
their indexes where the system has them.  The sections at the end say, for each directory, where its files came
from and under what license.

## Using a directory

Take the one directory you need (`git clone --depth 1 --filter=blob:none --no-checkout`, then
`git sparse-checkout set linux/debian13/aarch64` and `git checkout`, fetches only that one; the whole repository is
about 1.5 GB), then give it to the compiler as the sysroot:

    clang --target=aarch64-linux-gnu --sysroot=cruntime/linux/debian13/aarch64 -fuse-ld=lld -o prog prog.c
    zig cc / rustc / cmake:  --sysroot, -C link-arg=--sysroot=..., CMAKE_SYSROOT

A Linux directory also holds libgcc under `usr/lib/gcc/<triple>/<version>`, which clang finds from the sysroot or
names with `--gcc-install-dir`; a Windows one has the mingw-w64 tree under `usr/<triple>` with crt2.o and
libmingw32.a.  With IMP72 the driver does all of this: `imp --target=aarch64-linux-gnu prog.imp` fetches the
directory from here and links.

What has been tried: programs of the IMP72 compiler linked with lld against the aarch64 Linux (glibc), x86_64 musl,
x86_64 mingw-w64, and x86_64 FreeBSD, OpenBSD and NetBSD directories; the aarch64 and mingw-w64 programs were run
(under qemu's user mode and Wine) and the musl one with Alpine's own loader.  The BSD programs were linked, not
run, and the clang command lines above are the ordinary ones, not tried here.

## Licenses

The files belong to their projects and keep their licenses; this repository adds nothing to them and is a
collection, not a work of its own.  The texts of the licenses that cover most of what is here are in `LICENSES/`
(GPL-2, GPL-3, LGPL-2.1, LGPL-3, Apache-2.0, the LLVM exception, the GCC Runtime Library Exception); the rest are in
`usr/share/doc/*/copyright` and in the notices of the header files of each directory.  What you must do with them
depends on what you do: **linking a program with the static C libraries here (libc.a) can put LGPL or GPL code in
it, with the duties that carry, which the dynamic libraries do not**; the libgcc and start files are under the GCC
Runtime Library Exception, which lets a program of any license use them.  The corresponding source of each binary is
named in its section below.  This is how the files were found, not legal advice.

macOS is not in this repository on purpose.  The Darwin headers (Apple's open source Libc and xnu, under the Apple
Public Source License 2.0 and BSD licenses) could be, but the **libSystem.tbd** stub that a link needs was made by
the Zig project from Apple's SDK, and Apple has not given it a license of its own, so it is not redistributed here:
imp-sysroot fetches it from Zig's own tarball onto the machine that uses it, and says so in its provenance.

## Provenance

<!-- provenance:begin -->

### freebsd/i386 (i686-unknown-freebsd)

Made by imp-sysroot on 2026-11-12 with the recipe `freebsd:i386`; nothing in it was written by hand.

**Source: the FreeBSD base system** (base.txz of the release, https://download.freebsd.org/releases/): the C library, libm, start files, libgcc/compiler-rt and headers (BSD-2-Clause and the licenses of the files in them).  Checked against the SHA-256 of the release's MANIFEST.  Of its usr/lib only what a link needs is kept (start files, libc, libm, libgcc and compiler-rt, the threads, utility and kernel-access libraries); the rest of the base system, usr/include/c++ and usr/include/clang are left out.

#### What was fetched

- FreeBSD-14.5-RELEASE-i386 base.txz df050ced51cf418072e601b297a24dce9dc872f834d3a64bbacc4b13167d9c66

#### License and source

BSD-2-Clause, BSD-3-Clause and ISC by file (the notices are in the header files; ./COPYRIGHT of the release is here where the set has one), with the compiler-rt and libgcc parts under Apache-2.0 WITH LLVM-exception and GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the release's src set or its repository (https://cgit.freebsd.org/, https://cvsweb.openbsd.org/, https://cvsweb.netbsd.org/).

### freebsd/aarch64 (aarch64-unknown-freebsd)

Made by imp-sysroot on 2026-11-12 with the recipe `freebsd:arm64`; nothing in it was written by hand.

**Source: the FreeBSD base system** (base.txz of the release, https://download.freebsd.org/releases/): the C library, libm, start files, libgcc/compiler-rt and headers (BSD-2-Clause and the licenses of the files in them).  Checked against the SHA-256 of the release's MANIFEST.  Of its usr/lib only what a link needs is kept (start files, libc, libm, libgcc and compiler-rt, the threads, utility and kernel-access libraries); the rest of the base system, usr/include/c++ and usr/include/clang are left out.

#### What was fetched

- FreeBSD-15.1-RELEASE-arm64 base.txz 5b7a46a0abfbe23a1d4454b5600e2efcfce16b705bc7e9c851c37470c035ef98

#### License and source

BSD-2-Clause, BSD-3-Clause and ISC by file (the notices are in the header files; ./COPYRIGHT of the release is here where the set has one), with the compiler-rt and libgcc parts under Apache-2.0 WITH LLVM-exception and GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the release's src set or its repository (https://cgit.freebsd.org/, https://cvsweb.openbsd.org/, https://cvsweb.netbsd.org/).

### freebsd/x86_64 (x86_64-unknown-freebsd)

Made by imp-sysroot on 2026-11-12 with the recipe `freebsd:amd64`; nothing in it was written by hand.

**Source: the FreeBSD base system** (base.txz of the release, https://download.freebsd.org/releases/): the C library, libm, start files, libgcc/compiler-rt and headers (BSD-2-Clause and the licenses of the files in them).  Checked against the SHA-256 of the release's MANIFEST.  Of its usr/lib only what a link needs is kept (start files, libc, libm, libgcc and compiler-rt, the threads, utility and kernel-access libraries); the rest of the base system, usr/include/c++ and usr/include/clang are left out.

#### What was fetched

- FreeBSD-15.1-RELEASE-amd64 base.txz 3768988b151c20f965679062b065c63a977d6bbb9f47fd83695ec2c40790c18f

#### License and source

BSD-2-Clause, BSD-3-Clause and ISC by file (the notices are in the header files; ./COPYRIGHT of the release is here where the set has one), with the compiler-rt and libgcc parts under Apache-2.0 WITH LLVM-exception and GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the release's src set or its repository (https://cgit.freebsd.org/, https://cvsweb.openbsd.org/, https://cvsweb.netbsd.org/).

### linux/alpine322/aarch64 (aarch64-linux-musl)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:aarch64:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/aarch64 d616c430bcbe0bf452b7f6ea2669f2cad14e85644a7599f4f495115d021742ef
- musl-dev-1.2.5-r13.apk v3.22/aarch64 9d100736f645f15c01da723c9bafd8a843ae847ef4334aa4c0f53405dcfa4dff
- linux-headers-6.14.2-r0.apk v3.22/aarch64 08bc7264055d4ceca249e21f47875ccd7ae2dc7eaf49e235a83b1059e06d9089
- gcc-14.2.0-r6.apk v3.22/aarch64 0224b985a055ef90324dee9a65c5683f28499f0798db23cae90b40ebba620772

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/alpine322/armv7 (armv7-linux-musleabihf)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:armv7:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/armv7 f6f874092f120ea418d72abf554ac114c4aa34618ae5be84dc7cb3e48e614422
- musl-dev-1.2.5-r13.apk v3.22/armv7 64cb621ca0ccf1cff50689a4bdde97a28204433c0c3ae70d590a71b99cb61e60
- linux-headers-6.14.2-r0.apk v3.22/armv7 4bc6864f71361fb15a1ca2d96d217343c0e84f2e5dce6518ed84b3f694c0e9df
- gcc-14.2.0-r6.apk v3.22/armv7 318b9f4425a86462defc92258c48a791f2bc95a8ab93ea569e3c246b6cde857f

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/alpine322/i386 (i686-linux-musl)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:x86:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/x86 3e13bc32b4a00673c3f44e139a8eb24bf4abf0ebd57a97dc060216906daf9d73
- musl-dev-1.2.5-r13.apk v3.22/x86 a9307f9b82f42a5a203f743f0f4bf0828257d7565859406160bbfa3d64832cee
- linux-headers-6.14.2-r0.apk v3.22/x86 1eecc11eee0c2c73796c3acb6cd869041516d46c902b0e3a75b301ffe4be5bfb
- gcc-14.2.0-r6.apk v3.22/x86 65a672a52500b7fecb27440aa1bc830d49d34614b63b8cabb283169e750a3142

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/alpine322/loongarch64 (loongarch64-linux-musl)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:loongarch64:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/loongarch64 5b6975f96039d4fc912b58b04134cec77dfe913ae819bc78a4bd39ed86b2ed7e
- musl-dev-1.2.5-r13.apk v3.22/loongarch64 117bdcaba09493440fa358addf448cc0ba3f11235ef417c6f3c5f993860f17f9
- linux-headers-6.14.2-r0.apk v3.22/loongarch64 dbd3b14117e240d25924c9ce6310503e02d98f15208f1d006447d7ec0c5959f7
- gcc-14.2.0-r6.apk v3.22/loongarch64 0a134b8677a979e755d6d80b643ca97db9f9e43339733ced0080098f001aca62

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/alpine322/ppc64le (powerpc64le-linux-musl)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:ppc64le:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/ppc64le cbc140f849bee3036efc89735c4d312ae0f23f1abe6c42d7f23d557c85ed3e01
- musl-dev-1.2.5-r13.apk v3.22/ppc64le 209e502448b142ea67fc2f419ea65f38e7719c2922ffc8fe587ffe9c3ccf23d6
- linux-headers-6.14.2-r0.apk v3.22/ppc64le b4cd6ca879655ee8fed4e95587a37e4610998d5861ff46c5fb818ef2eb826535
- gcc-14.2.0-r6.apk v3.22/ppc64le b1221557cc44ba5393972183c5ba73549148055ac1f6d9623e64fe363cf3b175

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/alpine322/riscv64 (riscv64-linux-musl)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:riscv64:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/riscv64 27760752b676b78f1edca22b7d933515ea9ed3596bb7378da8d2bb81c873a3e6
- musl-dev-1.2.5-r13.apk v3.22/riscv64 f6f83e77065bfdd1a918f1a906d768357024f6d0c5dec6a486597c4726dfc638
- linux-headers-6.14.2-r0.apk v3.22/riscv64 8ae41d83c149efb027ef3ef3a5a08f30572eb5d12466ee238cfd4ebc21267f24
- gcc-14.2.0-r6.apk v3.22/riscv64 456c6a14a2e04e5e5dd88f9025df6d1eac10db56ff970517ba4c6048061686b7

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/alpine322/s390x (s390x-linux-musl)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:s390x:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/s390x a7bd3c2aacd4e75d642eb5e40f65ca7925efaac98134fa52f4c9b070cdf6c366
- musl-dev-1.2.5-r13.apk v3.22/s390x 77f0be10f2879ed7222b55cfb31f2d7f0fd8604b225a91e80e93824fce709be9
- linux-headers-6.14.2-r0.apk v3.22/s390x 74bc11b78519137b3786c3aad7c595063641f60cd5cba524d2087250635d1449
- gcc-14.2.0-r6.apk v3.22/s390x 2b56e90c3f0c14d7482bc43a4cb396bf6f1ec72a802cb1e90d764d8a56f0317b

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/alpine322/x86_64 (x86_64-linux-musl)

Made by imp-sysroot on 2026-11-12 with the recipe `alpine:x86_64:alpine322`; nothing in it was written by hand.

**Source: Alpine Linux packages** (https://dl-cdn.alpinelinux.org/alpine), release alpine322: musl and musl-dev (the C library, its headers and start files: MIT), linux-headers (GPL-2 with the Linux-syscall-note), and from gcc only usr/lib/gcc (its start files and libgcc.a: GPL-3 with the GCC runtime library exception; the compiler itself is left out).  Fetched over https; the SHA-256 of each file is listed below (Alpine's index has only a SHA-1 of part of each package, which is not checked).

#### What was fetched

- musl-1.2.5-r13.apk v3.22/x86_64 359890bc7c4dc5fee7a85192de60a471c987e4664767288578beca60a44db2c8
- musl-dev-1.2.5-r13.apk v3.22/x86_64 2ca496dd68c0b340b50cf9940bc2f3312eac8b56ec2d3284a621be6f0c09ffb1
- linux-headers-6.14.2-r0.apk v3.22/x86_64 b0d7184f0e8d926961b82dff3d8a6a1f85db100dfc97e3fa1e6a25bbe9fd0f71
- gcc-14.2.0-r6.apk v3.22/x86_64 4fd10bd05784f596e5ff0adc724a94b71380fac0ac276bd257dd861e8b5822e6

#### License and source

musl: MIT (usr/share/doc/musl/COPYRIGHT lists the few files under BSD and other licenses).  linux-headers: GPL-2.0 WITH Linux-syscall-note.  libgcc.a and the start files of gcc: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: Alpine's aports, https://git.alpinelinux.org/aports, and https://musl.libc.org/.

### linux/debian13/aarch64 (aarch64-linux-gnu)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:arm64:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture arm64: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_arm64.deb sha256 8784eda966b189c777a384dac5ce009e8fc9b52d006926c5a013e7fa8aa688cc
- libc6-dev_2.41-12+deb13u4_arm64.deb sha256 71e373cb5e9da975b02fb4af555929cb1977560e2dd8245de4eb8a7b03677a08
- libgcc-s1_14.2.0-19_arm64.deb sha256 1108bc87879833d6d9a145f22a4a15cddb34e065b4b5f4b97bee586adbac2851
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_arm64.deb sha256 64b8ebc7182a69aa9525df6eab5e7eb849b947e350d821549f8a8a3e9b19e5ba

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### linux/debian13/arm (arm-linux-gnueabi)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:armel:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture armel: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_armel.deb sha256 fd6308283cdad9b6dc5d04b1478d13022593997d269db26ee09bb3a31515e94f
- libc6-dev_2.41-12+deb13u4_armel.deb sha256 26fa65007c9934d0836aee761577b598dd1432cc8a4a7e14bc7c2b9dc6eca1d9
- libgcc-s1_14.2.0-19_armel.deb sha256 2a7efceac4acc13ee23ff73fee1ca3e865baa2b09b9537f0d8496fac7dff7d4f
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_armel.deb sha256 2396c249bae4208c7049f3eefb55e650077f9f8e6fb221dbed183b32eaee803f

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### linux/debian13/armv7 (armv7-linux-gnueabihf)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:armhf:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture armhf: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_armhf.deb sha256 4fc6fed8d77d01c0dacb5fda8b880a8c8a669575936de5761b693077a6f6c2ec
- libc6-dev_2.41-12+deb13u4_armhf.deb sha256 fdb7f1d4a0446b71e4ed15d993b1da421733bd783eddfabbb92ec303177adc59
- libgcc-s1_14.2.0-19_armhf.deb sha256 25910c3a0bce3985e388de445244578b7922dc670c9bba1c8673779b89447873
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_armhf.deb sha256 f74912d6d0bc28058471ae7ff98f45edd8d5f6612c903116e218e56d3abbb9d0

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### linux/debian13/i386 (i686-linux-gnu)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:i386:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture i386: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_i386.deb sha256 67bb4b54cf4bb6a380449dfa1852cd9135659f85360caa0e41d312f4b30e573a
- libc6-dev_2.41-12+deb13u4_i386.deb sha256 53dae947b759288f7f1e858a7eec6c3c00adf50317c674515c2a9d2399681bb0
- libgcc-s1_14.2.0-19_i386.deb sha256 a4c71fd856d2a48a7505a087b4186e3cca23f94603c05e3fb7c799b27e72f761
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_i386.deb sha256 d7e960c3c23fc017cb958ad7497bf1d2dce8a70fd6341614580c249cb5859265

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### linux/debian13/ppc64le (powerpc64le-linux-gnu)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:ppc64el:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture ppc64el: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_ppc64el.deb sha256 917cbd81a9038133bd58bbfe0991db889a78eb446be2080015b7804942b45ec2
- libc6-dev_2.41-12+deb13u4_ppc64el.deb sha256 ec599cd9f829b6afa219acf9bcd05878de41e49943cd24c8580ae9d3cabefcb0
- libgcc-s1_14.2.0-19_ppc64el.deb sha256 9fef01c88bc508ff05ff9ce5d0cc05de36798591e060b07749c3835616ed5696
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_ppc64el.deb sha256 8e47abc40fe731fa380d3226fbdfda100274035d7295cf94fd86ea729e4edaea

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### linux/debian13/riscv64 (riscv64-linux-gnu)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:riscv64:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture riscv64: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_riscv64.deb sha256 77f0da760da3eab6318917857669ec23556b4e1ee489218cb966884a11b0d967
- libc6-dev_2.41-12+deb13u4_riscv64.deb sha256 46ac97192a508a016f454624bcf4ae8ca9ca4589eb41c33b69c2eb24b446084c
- libgcc-s1_14.2.0-19_riscv64.deb sha256 16d3f9f534028615413d23f649e5d246baef48fe7db739ad564ef8b9a6e5587c
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_riscv64.deb sha256 d7811e6b1984251d786b2ca938ae7f21fdf9d0d8364f0bd85b1d87bf17e82db5

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### linux/debian13/s390x (s390x-linux-gnu)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:s390x:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture s390x: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_s390x.deb sha256 c6e658d8e17d885c831ad1275501ef1abdadc6c93e9ac7758cfd1e5cde2d608b
- libc6-dev_2.41-12+deb13u4_s390x.deb sha256 3717b5a19e7f707f7174fd623a2afe2404af0a1bfd666096da70531a44473d31
- libgcc-s1_14.2.0-19_s390x.deb sha256 b5e87f11a8ac0537d500bf2dba37165bf8d25b5b44add1035a32deddbd4bfdda
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_s390x.deb sha256 9466f8f6a733f5a7f65953de184402e8226c94449bc9181de40ddc2e20448e50

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### linux/debian13/x86_64 (x86_64-linux-gnu)

Made by imp-sysroot on 2026-11-12 with the recipe `debian:amd64:debian13`; nothing in it was written by hand.

**Source: Debian 13 packages** (https://deb.debian.org/debian), architecture amd64: the C library and its headers (libc6, libc6-dev: glibc, LGPL-2.1+), the kernel's headers (linux-libc-dev: GPL-2 with the Linux-syscall-note), libgcc and its start files (libgcc-s1, libgcc-N-dev: GPL-3 with the GCC runtime library exception).  Each package is checked against the SHA-256 of Debian's Packages index.  Taken whole.

#### What was fetched

- libc6_2.41-12+deb13u4_amd64.deb sha256 967aa62605721081c3eb2a17650611a792aa802d76a6511d1840242623d204c9
- libc6-dev_2.41-12+deb13u4_amd64.deb sha256 1fda734dabcd80b77266a09ab62b0f1e3e16d8091db62899890b2200745632a2
- libgcc-s1_14.2.0-19_amd64.deb sha256 3c71917b490d1a17aed43196a2787a256ecf060526cdb20216a74bedc061b150
- linux-libc-dev_6.12.107-1_all.deb sha256 dc68dd53c7356598d005866da0d19d7bd33af2a62971aced624cdf04492902b4
- libgcc-14-dev_14.2.0-19_amd64.deb sha256 ca6f2d36d96b19b3eb71405b0b80134d8c89380b02204a2512e5c58ceb090628

#### License and source

The licenses are those of the packages, in usr/share/doc/PACKAGE/copyright (glibc: LGPL-2.1-or-later with parts under BSD, ISC, GPL-2 and others, listed there; the kernel headers: GPL-2.0 WITH Linux-syscall-note; libgcc: GPL-3.0-or-later WITH GCC-exception-3.1).  LGPL and GPL binaries are here: the corresponding source of each is the Debian source package of the same name and version (`apt-get source`, or https://sources.debian.org/).

### netbsd/x86_64 (x86_64-unknown-netbsd)

Made by imp-sysroot on 2026-11-12 with the recipe `netbsd:amd64`; nothing in it was written by hand.

**Source: the NetBSD base and comp sets** (base.tar.xz and comp.tar.xz of the release, https://cdn.netbsd.org/pub/NetBSD/): the shared libraries and loader (base), the start files, static libraries and headers (comp) (BSD licenses of the files in them).  Checked against the SHA-512 of the release's SHA512 file.  Of its usr/lib only what a link needs is kept.

#### What was fetched

- NetBSD-11.1-amd64 base.tar.xz 01d1ae3b28eb275f8788f9935ab5ec361ff23a95e7367ec4e2d134af37be7dde6ab9d67ed1e64c690c71dcbfe8bb770bbaaf7af57852475cb60de6ddf55220dd
- NetBSD-11.1-amd64 comp.tar.xz 965216c4ef854bba10b299de78287225b60454ab1ba762af81c9e8d26d39ad28bdc26057bd656502c21dc3cda2223da94107cea1d541fe8cbfa35ada2073dcc4

#### License and source

BSD-2-Clause, BSD-3-Clause and ISC by file (the notices are in the header files; ./COPYRIGHT of the release is here where the set has one), with the compiler-rt and libgcc parts under Apache-2.0 WITH LLVM-exception and GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the release's src set or its repository (https://cgit.freebsd.org/, https://cvsweb.openbsd.org/, https://cvsweb.netbsd.org/).

### openbsd/aarch64 (aarch64-unknown-openbsd)

Made by imp-sysroot on 2026-11-12 with the recipe `openbsd:arm64`; nothing in it was written by hand.

**Source: the OpenBSD base set** (baseNN.tgz of the release, https://cdn.openbsd.org/pub/OpenBSD/): the C library, libm, start files, compiler-rt and headers (BSD licenses of the files in them, ISC).  Checked against the SHA-256 of the release's SHA256 file (the signature SHA256.sig is not checked).  Of its usr/lib only what a link needs is kept.

#### What was fetched

- OpenBSD-8.0-arm64 base80.tgz 92cfeda3da21d14f10f0687d194a3a6ec99fbf89140f927369e37f917ca35ed9

#### License and source

BSD-2-Clause, BSD-3-Clause and ISC by file (the notices are in the header files; ./COPYRIGHT of the release is here where the set has one), with the compiler-rt and libgcc parts under Apache-2.0 WITH LLVM-exception and GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the release's src set or its repository (https://cgit.freebsd.org/, https://cvsweb.openbsd.org/, https://cvsweb.netbsd.org/).

### openbsd/x86_64 (x86_64-unknown-openbsd)

Made by imp-sysroot on 2026-11-12 with the recipe `openbsd:amd64`; nothing in it was written by hand.

**Source: the OpenBSD base set** (baseNN.tgz of the release, https://cdn.openbsd.org/pub/OpenBSD/): the C library, libm, start files, compiler-rt and headers (BSD licenses of the files in them, ISC).  Checked against the SHA-256 of the release's SHA256 file (the signature SHA256.sig is not checked).  Of its usr/lib only what a link needs is kept.

#### What was fetched

- OpenBSD-8.0-amd64 base80.tgz ec4957f6fd81756412265a6d2f394268d61927c953ef0677a8a2b7dc1cd6afd2

#### License and source

BSD-2-Clause, BSD-3-Clause and ISC by file (the notices are in the header files; ./COPYRIGHT of the release is here where the set has one), with the compiler-rt and libgcc parts under Apache-2.0 WITH LLVM-exception and GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the release's src set or its repository (https://cgit.freebsd.org/, https://cvsweb.openbsd.org/, https://cvsweb.netbsd.org/).

### windows/i386 (i686-w64-mingw32)

Made by imp-sysroot on 2026-11-12 with the recipe `mingw:i686`; nothing in it was written by hand.

**Source: Debian packages of mingw-w64** (https://deb.debian.org/debian): mingw-w64-i686-dev and mingw-w64-common (the headers and import libraries of Windows, the msvcrt start files crt2.o, libmingw32.a: public domain, ZPL-2.1 and BSD-style licenses, see usr/share/doc), and from gcc-mingw-w64-i686-win32 only libgcc.a, libgcc_eh.a and the start files crtbegin.o and crtend.o (GPL-3 with the GCC runtime library exception).  Checked against the SHA-256 of Debian's Packages index.

#### What was fetched

- mingw-w64-i686-dev_12.0.0-5_all.deb sha256 ddd5f65c29014ae67b89df146a8016f38056a9d8eadbccd17cae4c00ccd01528
- mingw-w64-common_12.0.0-5_all.deb sha256 97dce5d0d8aff1cade4786ad4ef5078345477a598829afcac2e7f2fbc5399990
- gcc-mingw-w64-i686-win32_14.2.0-19+27+b1_amd64.deb sha256 918cc18b87ccaa197a2abf53d00382cb48779a99ea5c9c10413099d92a4dfa1f

#### License and source

mingw-w64 is public domain, ZPL-2.1 and BSD-style by file (usr/share/doc/mingw-w64-*/copyright); libgcc and the start files: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the Debian source packages mingw-w64 and gcc-mingw-w64 (https://sources.debian.org/).

### windows/x86_64 (x86_64-w64-mingw32)

Made by imp-sysroot on 2026-11-12 with the recipe `mingw:x86-64`; nothing in it was written by hand.

**Source: Debian packages of mingw-w64** (https://deb.debian.org/debian): mingw-w64-x86-64-dev and mingw-w64-common (the headers and import libraries of Windows, the msvcrt start files crt2.o, libmingw32.a: public domain, ZPL-2.1 and BSD-style licenses, see usr/share/doc), and from gcc-mingw-w64-x86-64-win32 only libgcc.a, libgcc_eh.a and the start files crtbegin.o and crtend.o (GPL-3 with the GCC runtime library exception).  Checked against the SHA-256 of Debian's Packages index.

#### What was fetched

- mingw-w64-x86-64-dev_12.0.0-5_all.deb sha256 0bf89cf7454cccb49cd2a46a6f7b33896f6ae3a1a2fe33e02c40be6155bbb385
- mingw-w64-common_12.0.0-5_all.deb sha256 97dce5d0d8aff1cade4786ad4ef5078345477a598829afcac2e7f2fbc5399990
- gcc-mingw-w64-x86-64-win32_14.2.0-19+27+b1_amd64.deb sha256 a4d7abc5c9c97380eeac348d3b94d522a04e80028bb825cd44df09d9ba90092f

#### License and source

mingw-w64 is public domain, ZPL-2.1 and BSD-style by file (usr/share/doc/mingw-w64-*/copyright); libgcc and the start files: GPL-3.0-or-later WITH GCC-exception-3.1.  Corresponding source: the Debian source packages mingw-w64 and gcc-mingw-w64 (https://sources.debian.org/).

<!-- provenance:end -->
