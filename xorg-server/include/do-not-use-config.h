/* include/do-not-use-config.h.  Generated from do-not-use-config.h.in by configure.  */
/* include/do-not-use-config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Default base font path */
#define BASE_FONT_PATH "/usr/share/fonts/X11"

/* Support BigRequests extension */
#define BIGREQS 1

/* Define to 1 if `struct sockaddr_in' has a `sin_len' member */
/* #undef BSD44SOCKETS */

/* Builder address */
#define BUILDERADDR "xorg@lists.freedesktop.org"

/* Builder string */
#define BUILDERSTRING ""

/* Prefix to use for bundle identifiers */
#define BUNDLE_ID_PREFIX ""

/* Include busfault OS API */
#define BUSFAULT 1

/* Support client ID tracking */
#define CLIENTIDS 1

/* Default font path */
#define COMPILEDDEFAULTFONTPATH "/usr/share/fonts/X11/misc/,/usr/share/fonts/X11/TTF/,/usr/share/fonts/X11/OTF/,/usr/share/fonts/X11/Type1/,/usr/share/fonts/X11/100dpi/,/usr/share/fonts/X11/75dpi/"

/* Support Composite Extension */
#define COMPOSITE 1

/* Use the HAL hotplug API */
/* #undef CONFIG_HAL */

/* Use libudev for input hotplug */
/* #undef CONFIG_UDEV */

/* Use libudev for kms enumeration */
/* #undef CONFIG_UDEV_KMS */

/* Use wscons for input auto configuration */
/* #undef CONFIG_WSCONS */

/* System is BSD-like */
/* #undef CSRG_BASED */

/* Simple debug messages */
/* #undef CYGDEBUG */

/* Debug window manager */
/* #undef CYGMULTIWINDOW_DEBUG */

/* Debug messages for window handling */
/* #undef CYGWINDOWING_DEBUG */

/* Support Damage extension */
#define DAMAGE 1

/* Support DBE extension */
#define DBE 1

/* Use ddxBeforeReset */
/* #undef DDXBEFORERESET */

/* Use OsVendorVErrorF */
/* #undef DDXOSVERRORF */

/* Enable debugging code */
/* #undef DEBUG */

/* Default library install path */
#define DEFAULT_LIBRARY_PATH "/usr/local/lib"

/* Default log location */
#define DEFAULT_LOGDIR "/usr/local/var/log"

/* Default logfile prefix */
#define DEFAULT_LOGPREFIX "Xorg."

/* Default module search path */
#define DEFAULT_MODULE_PATH "/usr/local/lib/xorg/modules"

/* Default XDG_DATA dir under HOME */
#define DEFAULT_XDG_DATA_HOME ".local/share"

/* Default log dir under XDG_DATA_HOME */
#define DEFAULT_XDG_DATA_HOME_LOGDIR "xorg"

/* Support DGA extension */
#define DGA 1

/* Support DPMS extension */
#define DPMSExtension 1

/* Build DRI2 extension */
#define DRI2 1

/* Build DRI3 extension */
#define DRI3 1

/* Default DRI driver path */
#define DRI_DRIVER_PATH ""

/* Fallback input driver */
#define FALLBACK_INPUT_DRIVER "libinput"

/* Have gbm_bo_create_with_modifiers */
/* #undef GBM_BO_WITH_MODIFIERS */

/* Build glamor */
#define GLAMOR 1

/* Have GLAMOR_HAS_EGL_QUERY_DMABUF */
/* #undef GLAMOR_HAS_EGL_QUERY_DMABUF */

/* Have GLAMOR_HAS_EGL_QUERY_DRIVER */
/* #undef GLAMOR_HAS_EGL_QUERY_DRIVER */

/* Build glamor with GBM-based EGL support */
#define GLAMOR_HAS_GBM 1

/* Have GBM_BO_USE_LINEAR */
/* #undef GLAMOR_HAS_GBM_LINEAR */

/* Build GLX extension */
#define GLXEXT 1

/* Support XDM-AUTH*-1 */
#define HASXDMAUTH 1

/* System has /dev/xf86 aperture driver */
/* #undef HAS_APERTURE_DRV */

/* Cygwin has /dev/windows for signaling new win32 messages */
/* #undef HAS_DEVWINDOWS */

/* Support SHM */
#define HAS_SHM 1

/* Use Windows sockets */
/* #undef HAS_WINSOCK */

/* Define to 1 if you have the `arc4random_buf' function. */
/* #undef HAVE_ARC4RANDOM_BUF */

/* Define to 1 if you have the `authdes_create' function. */
#define HAVE_AUTHDES_CREATE 1

/* Define to 1 if you have the `authdes_seccreate' function. */
/* #undef HAVE_AUTHDES_SECCREATE */

/* Has backtrace support */
#define HAVE_BACKTRACE 1

/* Define to 1 if you have the `cbrt' function. */
#define HAVE_CBRT 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Have D-Bus support */
/* #undef HAVE_DBUS */

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `epoll_create1' function. */
#define HAVE_EPOLL_CREATE1 1

/* Have execinfo.h */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAVE_GETPEEREID */

/* Define to 1 if you have the `getpeerucred' function. */
/* #undef HAVE_GETPEERUCRED */

/* Define to 1 if you have the `getprogname' function. */
/* #undef HAVE_GETPROGNAME */

/* Define to 1 if you have the `getresuid' function. */
#define HAVE_GETRESUID 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the `getzoneid' function. */
/* #undef HAVE_GETZONEID */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isastream' function. */
/* #undef HAVE_ISASTREAM */

/* Define to 1 if you have the `issetugid' function. */
/* #undef HAVE_ISSETUGID */

/* Define to 1 if you have the `audit' library (-laudit). */
/* #undef HAVE_LIBAUDIT */

/* Define to 1 if you have the <libaudit.h> header file. */
/* #undef HAVE_LIBAUDIT_H */

/* Define to 1 if you have the `bsd' library (-lbsd). */
/* #undef HAVE_LIBBSD */

/* Define to 1 if you have the libdispatch (GCD) available */
/* #undef HAVE_LIBDISPATCH */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if libudev is available. */
#define HAVE_LIBUDEV 1

/* Have libunwind support */
/* #undef HAVE_LIBUNWIND */

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
/* #undef HAVE_LIBWS2_32 */

/* Define to 1 if you have the <linux/agpgart.h> header file. */
#define HAVE_LINUX_AGPGART_H 1

/* Define to 1 if you have the <linux/apm_bios.h> header file. */
#define HAVE_LINUX_APM_BIOS_H 1

/* Define to 1 if you have the <linux/fb.h> header file. */
#define HAVE_LINUX_FB_H 1

/* Define to 1 if you have the `memfd_create' function. */
#define HAVE_MEMFD_CREATE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkostemp' function. */
#define HAVE_MKOSTEMP 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the `posix_fallocate' function. */
#define HAVE_POSIX_FALLOCATE 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Have function pthread_setname_np(const char*) */
/* #undef HAVE_PTHREAD_SETNAME_NP_WITHOUT_TID */

/* Have function pthread_setname_np(pthread_t, const char*) */
#define HAVE_PTHREAD_SETNAME_NP_WITH_TID 1

/* Define to 1 if you have the `reallocarray' function. */
#define HAVE_REALLOCARRAY 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setitimer' function. */
#define HAVE_SETITIMER 1

/* Use CommonCrypto SHA1 functions */
/* #undef HAVE_SHA1_IN_COMMONCRYPTO */

/* Use CryptoAPI SHA1 functions */
/* #undef HAVE_SHA1_IN_CRYPTOAPI */

/* Use libc SHA1 functions */
/* #undef HAVE_SHA1_IN_LIBC */

/* Use libgcrypt SHA1 functions */
/* #undef HAVE_SHA1_IN_LIBGCRYPT */

/* Use libmd SHA1 functions */
/* #undef HAVE_SHA1_IN_LIBMD */

/* Use libnettle SHA1 functions */
#define HAVE_SHA1_IN_LIBNETTLE 1

/* Use libsha1 for SHA1 */
/* #undef HAVE_SHA1_IN_LIBSHA1 */

/* Define to 1 if you have the `shmctl64' function. */
/* #undef HAVE_SHMCTL64 */

/* Have sigaction function */
#define HAVE_SIGACTION 1

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if libsystemd-daemon is available */
/* #undef HAVE_SYSTEMD_DAEMON */

/* Define to 1 if SYSV IPC is available */
#define HAVE_SYSV_IPC 1

/* Define to 1 if you have the <sys/agpgart.h> header file. */
/* #undef HAVE_SYS_AGPGART_H */

/* Define to 1 if you have the <sys/agpio.h> header file. */
/* #undef HAVE_SYS_AGPIO_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/kd.h> header file. */
/* #undef HAVE_SYS_KD_H */

/* Define to 1 if you have the <sys/linker.h> header file. */
/* #undef HAVE_SYS_LINKER_H */

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/vt.h> header file. */
/* #undef HAVE_SYS_VT_H */

/* Define to 1 if you have the `timingsafe_memcmp' function. */
/* #undef HAVE_TIMINGSAFE_MEMCMP */

/* Define to 1 if typeof works with your compiler. */
#define HAVE_TYPEOF 1

/* Define to 1 if you have the `udev_enumerate_add_match_tag' function. */
/* #undef HAVE_UDEV_ENUMERATE_ADD_MATCH_TAG */

/* Define to 1 if you have the `udev_monitor_filter_add_match_tag' function.
   */
/* #undef HAVE_UDEV_MONITOR_FILTER_ADD_MATCH_TAG */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `walkcontext' function. */
/* #undef HAVE_WALKCONTEXT */

/* Have xshmfence support */
#define HAVE_XSHMFENCE 1

/* Use a separate input thread */
#define INPUTTHREAD 1

/* Support IPv6 for TCP connections */
#define IPv6 1

/* Listen on local socket */
#define LISTEN_LOCAL 1

/* Listen on TCP socket */
/* #undef LISTEN_TCP */

/* Listen on Unix socket */
#define LISTEN_UNIX 1

/* Support os-specific local connections */
/* #undef LOCALCONN */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Support MIT-SHM extension */
#define MITSHM 1

/* Have monotonic clock from clock_gettime() */
#define MONOTONIC_CLOCK 1

/* Enable D-Bus core */
/* #undef NEED_DBUS */

/* Need XFree86 helper functions */
#define NEED_XF86_PROTOTYPES 1

/* Need XFree86 typedefs */
#define NEED_XF86_TYPES 1

/* Define to 1 if no local socket credentials interface exists */
/* #undef NO_LOCAL_CLIENT_CRED */

/* Operating System Name */
#define OSNAME "Linux 5.11.0-34-generic x86_64"

/* Operating System Vendor */
#define OSVENDOR ""

/* Name of package */
#define PACKAGE "xorg-server"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://gitlab.freedesktop.org/xorg/xserver/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "xorg-server"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "xorg-server 1.20.10"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "xorg-server"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.20.10"

/* Major version of this package */
#define PACKAGE_VERSION_MAJOR 1

/* Minor version of this package */
#define PACKAGE_VERSION_MINOR 20

/* Patch version of this package */
#define PACKAGE_VERSION_PATCHLEVEL 10

/* Internal define for Xinerama */
#define PANORAMIX 1

/* System has PC console */
/* #undef PCCONS_SUPPORT */

/* Default PCI text file ID path */
#define PCI_TXT_IDS_PATH ""

/* System has PC console */
/* #undef PCVT_SUPPORT */

/* Support Present extension */
#define PRESENT 1

/* Overall prefix */
#define PROJECTROOT "/usr/local"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Support RANDR extension */
#define RANDR 1

/* Make PROJECT_ROOT relative to the xserver location */
/* #undef RELOCATE_PROJECTROOT */

/* Support RENDER extension */
#define RENDER 1

/* Support X resource extension */
#define RES 1

/* Build Rootless code */
/* #undef ROOTLESS */

/* Support MIT-SCREEN-SAVER extension */
#define SCREENSAVER 1

/* Support Secure RPC ("SUN-DES-1") authentication for X11 clients */
#define SECURE_RPC 1

/* Server miscellaneous config path */
#define SERVER_MISC_CONFIG_PATH "/usr/local/lib/xorg"

/* Support SHAPE extension */
#define SHAPE 1

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 8

/* Build a standalone xpbproxy */
/* #undef STANDALONE_XPBPROXY */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Where to install the Xorg binary and Xorg.wrap */
/* #undef SUID_WRAPPER_DIR */

/* Define to 1 on systems derived from System V Release 4 */
/* #undef SVR4 */

/* sysconfdir */
#define SYSCONFDIR "/usr/local/etc"

/* System has syscons console */
/* #undef SYSCONS_SUPPORT */

/* Enable systemd-logind integration */
/* #undef SYSTEMD_LOGIND */

/* Support TCP socket connections */
#define TCPCONN 1

/* Support UNIX socket connections */
#define UNIXCONN 1

/* NetBSD PIO alpha IO */
/* #undef USE_ALPHA_PIO */

/* BSD AMD64 iopl */
/* #undef USE_AMD64_IOPL */

/* BSD /dev/io */
/* #undef USE_DEV_IO */

/* BSD i386 iopl */
/* #undef USE_I386_IOPL */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Vendor man version */
#define VENDOR_MAN_VERSION "Version 1.20.10"

/* Vendor name */
#define VENDOR_NAME "The X.Org Foundation"

/* Vendor name */
#define VENDOR_NAME_SHORT "X.Org"

/* Vendor release */
#define VENDOR_RELEASE (((1) * 10000000) + ((20) * 100000) + ((10) * 1000) + 0)

/* Version number of package */
#define VERSION "1.20.10"

/* Building with libdrm support */
#define WITH_LIBDRM 1

/* Building vgahw module */
#define WITH_VGAHW 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* System has wscons console */
/* #undef WSCONS_SUPPORT */

/* Build X-ACE extension */
#define XACE 1

/* Support XCMisc extension */
#define XCMISC 1

/* Name of configuration directory */
#define XCONFIGDIR "xorg.conf.d"

/* Name of configuration file */
#define XCONFIGFILE "xorg.conf"

/* Build Security extension */
/* #undef XCSECURITY */

/* Support XDM Control Protocol */
#define XDMCP 1

/* Support XF86 Big font extension */
/* #undef XF86BIGFONT */

/* Name of configuration file */
#define XF86CONFIGFILE "xorg.conf"

/* Build DRI extension */
#define XF86DRI 1

/* Support APM/ACPI power management in the server */
#define XF86PM 1

/* Support XFree86 Video Mode extension */
#define XF86VIDMODE 1

/* Support XFixes extension */
#define XFIXES 1

/* Building XFree86 server */
#define XFree86Server 1

/* Build XDGA support */
#define XFreeXDGA 1

/* Support Xinerama extension */
#define XINERAMA 1

/* Support X Input extension */
#define XINPUT 1

/* Path to XKB data */
#define XKB_BASE_DIRECTORY "/usr/share/X11/xkb"

/* Path to XKB bin dir */
#define XKB_BIN_DIRECTORY "/usr/bin"

/* Default XKB layout */
#define XKB_DFLT_LAYOUT "us"

/* Default XKB model */
#define XKB_DFLT_MODEL "pc105"

/* Default XKB options */
#define XKB_DFLT_OPTIONS ""

/* Default XKB ruleset */
#define XKB_DFLT_RULES "evdev"

/* Default XKB variant */
#define XKB_DFLT_VARIANT ""

/* Path to XKB output dir */
#define XKM_OUTPUT_DIR "/usr/share/X11/xkb/compiled/"

/* Building Xorg server */
#define XORGSERVER 1

/* Vendor man version */
#define XORG_MAN_VERSION "Version 1.20.10"

/* Building Xorg server */
#define XORG_SERVER 1

/* Current Xorg version */
#define XORG_VERSION_CURRENT (((1) * 10000000) + ((20) * 100000) + ((10) * 1000) + 0)

/* Have Quartz */
/* #undef XQUARTZ */

/* Support application updating through sparkle. */
/* #undef XQUARTZ_SPARKLE */

/* Support Record extension */
#define XRECORD 1

/* Build SELinux extension */
/* #undef XSELINUX */

/* Define to 1 if the DTrace Xserver provider probes should be built in. */
/* #undef XSERVER_DTRACE */

/* Use libpciaccess for all pci manipulation */
#define XSERVER_LIBPCIACCESS 1

/* X server supports platform device enumeration */
/* #undef XSERVER_PLATFORM_BUS */

/* Support XSync extension */
#define XSYNC 1

/* Support XTest extension */
#define XTEST 1

/* Enable xtrans fd passing support */
#define XTRANS_SEND_FDS 1

/* Support Xv extension */
#define XV 1

/* Vendor name */
#define XVENDORNAME "The X.Org Foundation"

/* Short vendor name */
#define XVENDORNAMESHORT "X.Org"

/* Build xwayland with eglstream support */
/* #undef XWL_HAS_EGLSTREAM */

/* Build xwayland with glamor support */
/* #undef XWL_HAS_GLAMOR */

/* byte order */
#define X_BYTE_ORDER X_LITTLE_ENDIAN

/* Build Xv extension */
#define XvExtension 1

/* Build XvMC extension */
#define XvMCExtension 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Enable GNU and other extensions to the C environment for glibc */
#define _GNU_SOURCE 1

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Defined if needed to expose struct msghdr.msg_control */
/* #undef _XOPEN_SOURCE */

/* Define to 1 if unsigned long is 64 bits. */
#define _XSERVER64 1

/* Vendor web address for support */
#define __VENDORDWEBSUPPORT__ "http://wiki.x.org"

/* Name of X server */
#define __XSERVERNAME__ "Xorg"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to __typeof__ if your compiler spells it that way. */
/* #undef typeof */
