#ifndef ZZ_OS_NATIVE_H
#define ZZ_OS_NATIVE_H

#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(__CYGWIN32__) || defined(_MSC_VER)
  #define IS_WINDOWS true
  #include <windows.h>
#else
  #define IS_WINDOWS false
#endif

#if defined(__unix__) || defined(__unix) || defined(unix)
  #define IS_UNIX true
  #include <unistd.h>
#else
  #define IS_UNIX false
#endif

#if defined(__linux__) || defined(__linux) | defined(linux)
  #define IS_LINUX true
  #include <unistd.h>
#else
  #define IS_LINUX false
#endif

#if defined(_POSIX_VERSION)
  #define IS_POSIX true
  #include <unistd.h>
#else
  #define IS_POSIX false
#endif

#if defined(__APPLE__)
  #define IS_APPLE true
#else
  #define IS_APPLE false
#endif

#if IS_WINDOWS
  #define EOL "\r\n"
#else
  #define EOL "\n"
#endif

#if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64)
  #define IS_AMD64 true
#else
  #define IS_AMD64 false
#endif

#if defined(__arm__) || defined(_ARM) || defined(_M_ARM) || defined(__arm)
  #define IS_ARM true
#else
  #define IS_ARM false
#endif

#if defined(__aarch64__)
  #define IS_ARM64 true
#else
  #define IS_ARM64 false
#endif

#if defined(i386) || defined(__i386) || defined(__i386__) || defined(_M_I86) || defined(_M_IX86) || defined(__X86__) || defined(_X86_)
  #define IS_I386 true
#else
  #define IS_I386 false
#endif

#if defined(mips) || defined(__mips__) || defined(__mips) || defined(__MIPS__)
  #define IS_MIPS true
#else
  #define IS_MIPS false
#endif

#if defined(__powerpc) || defined(__powerpc__) ||  defined(__POWERPC__) || defined(__ppc__) || defined(__PPC__) || defined(_M_PPC)
  #define IS_PPC true
#else
  #define IS_PPC false
#endif

#if defined(__powerpc64) || defined(__powerpc64__) || defined(__ppc64) || defined(__ppc64__) || defined(__PPC64) || defined(__PPC64__)
  #define IS_PPC64 true
  #define IS_PPC true
#else
  #define IS_PPC64 false
#endif

#define os_detect_apple IS_APPLE
#define os_detect_linux IS_LINUX
#define os_detect_posix IS_POSIX
#define os_detect_unix IS_UNIX
#define os_detect_windows IS_WINDOWS

typedef unsigned int Type;
typedef unsigned int Arch;

#endif
