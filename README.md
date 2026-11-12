# cruntime

Everything a linker needs from a target system to cross compile for it with LLVM: the system's **headers**, its
**start files** (crt0.o, crt1.o, crtbegin.o ...), its **C library**, libm and libgcc/compiler-rt, one directory per
operating system and architecture, each laid out as a `--sysroot`.  It was started by the
[IMP72](https://github.com/moebiusV/imp72) compiler project, which needs it to build programs for other systems
with one command, but nothing in it is specific to IMP72: any project that cross compiles (clang, lld, zig cc,
rustc, a Makefile of your own) can take a directory and use it, and none of you has to install a cross toolchain
or a virtual machine for each system.

## Layout

    OS/ARCH           linux/aarch64   linux/s390x   windows/x86_64
    OS/vNN/ARCH       freebsd/v151/x86_64   openbsd/v80/x86_64   netbsd/v111/x86_64

A system with releases has the release in the path (v151 is FreeBSD 15.1, v80 OpenBSD 8.0), the others do not.
Each directory is complete by itself:

    usr/include       the system's own header files
    usr/lib           the start files, the C library, libm, libgcc (or compiler-rt), the linker scripts
    lib, libexec      the shared libraries and loaders the linker scripts name (where the system has them)
    imp-meta          where it came from: the packages or sets, their versions and SHA-256 sums

| OS | Architectures | C library | From |
|---|---|---|---|
| linux | x86_64 aarch64 armv7 arm i386 riscv64 s390x ppc64le | glibc | Debian stable packages |
| windows | x86_64 i386 | msvcrt | mingw-w64 (Debian packages) |
| freebsd | x86_64 aarch64 (15.1), i386 (14.5) | FreeBSD libc | base.txz of the release |
| openbsd | x86_64 aarch64 (8.0) | OpenBSD libc | base set of the release |
| netbsd | x86_64 (11.1) | NetBSD libc | base and comp sets of the release |

Not here: macOS (Apple's SDK is not to be redistributed; take it from a Mac with `xcrun --show-sdk-path`),
Cygwin, musl, and the Debian ports Debian stable has dropped (mips, mipsel, mips64el).  Nothing is written by
hand: each directory is made from the system's own packages, checked against the checksums of their indexes, and
`imp-meta` says which.  Add a system by making its directory the same way (a pull request with the recipe).

## Using a directory

Take the one directory you need (`git clone --depth 1 --filter=blob:none --no-checkout` then
`git sparse-checkout set linux/aarch64` and `git checkout` fetches only that one; the whole repository is about
400 MB), then give it to the compiler as the sysroot:

    clang --target=aarch64-linux-gnu --sysroot=cruntime/linux/aarch64 -fuse-ld=lld -o prog prog.c
    zig cc / rustc / cmake:  --sysroot, -C link-arg=--sysroot=..., CMAKE_SYSROOT

A Linux directory also holds libgcc under `usr/lib/gcc/<triple>/<version>`, which clang finds from the sysroot or
names with `--gcc-install-dir`; a Windows one has the mingw-w64 tree under `usr/<triple>` with crt2.o and
libmingw32.a.  (With IMP72 the driver does all of this: `imp --target=aarch64-linux-gnu prog.imp` fetches the
directory from here and links; its tool, `imp-sysroot`, is a POSIX shell script that does not need IMP72 and can
be used to make or refresh any directory in this repository: `tools/imp-sysroot` in the IMP72 repository.)

What has been tried: programs of the IMP72 compiler linked with lld against the aarch64 Linux, x86_64 mingw-w64,
x86_64 FreeBSD, OpenBSD and NetBSD directories, and the first two run (under qemu's user mode and Wine).  The
BSD programs have been linked, not run, and the clang command lines above are the ordinary ones, not tried here.

## Licenses

The files belong to their projects and keep their licenses: glibc (LGPL), the Linux kernel headers (GPL with the
syscall exception), mingw-w64 (public domain, ZPL and BSD-style), the BSDs' own (BSD).  This repository adds
nothing to them; `imp-meta` of each directory names the exact packages so that you can get the sources.
