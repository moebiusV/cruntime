# cruntime

The C runtime files that `imp --target=TRIPLE` needs to link a program for another system (the IMP72 compiler,
https://github.com/moebiusV/imp72, `tools/imp-sysroot`): the system's headers, start files (crt0.o, crt1.o,
crtbegin.o ...), C library, libm and libgcc, laid out as `--sysroot` takes them.

    OS/ARCH               linux/aarch64   windows/x86_64
    OS/vNN/ARCH           openbsd/v80/x86_64   freebsd/v151/x86_64   netbsd/v111/x86_64

Each directory is a sysroot: `usr/include`, `usr/lib`, and `imp-meta` saying which packages it was made from
(name, version, SHA-256).  Nothing here is written by hand: `imp-sysroot` makes each directory from the system's
own packages (Debian packages, mingw-w64, the base sets of the BSDs), and the same recipe tells where it came
from.  The files belong to their projects and keep their licenses (glibc LGPL, mingw-w64 public domain/ZPL/BSD,
the BSDs' own); the Linux kernel headers are GPL with the syscall exception.  macOS is not here: Apple's SDK is
not to be redistributed.  `libimp.a` is not here either: it is made on the machine that uses the sysroot.

imp-sysroot looks here first (`IMP_CRUNTIME` names another place), then at the upstream packages.
