#ifndef ZZ_OS_DETECT_H
#define ZZ_OS_DETECT_H

/**
 * Operating system detection predicates
 */
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(__CYGWIN32__) || defined(_MSC_VER)
  #define OS_IS_WINDOWS 1
  #include <windows.h>
#else
  #define OS_IS_WINDOWS 0
#endif

#if defined(__unix__) || defined(__unix) || defined(unix)
  #define OS_IS_UNIX 1
  #include <unistd.h>
#else
  #define OS_IS_UNIX 0
#endif

#if defined(__linux__) || defined(__linux) | defined(linux)
  #define OS_IS_LINUX 1
  #include <unistd.h>
#else
  #define OS_IS_LINUX 0
#endif

#if defined(_POSIX_VERSION)
  #define OS_IS_POSIX 1
  #include <unistd.h>
#else
  #define OS_IS_POSIX 0
#endif

#if defined(__APPLE__)
  #define OS_IS_APPLE 1
#else
  #define OS_IS_APPLE 0
#endif

#if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64)
  #if SIZE_MAX == 0xFFFFFFFF
    #define OS_IS_AMD64 0
    #define OS_IS_AMD 1
  #else
    #define OS_IS_AMD64 1
    #define OS_IS_AMD 0
  #endif
#else
  #define OS_IS_AMD64 0
  #define OS_IS_AMD 0
#endif

#if defined(__arm__) || defined(_ARM) || defined(_M_ARM) || defined(__arm)
  #define OS_IS_ARM 1
#else
  #define OS_IS_ARM 0
#endif

#if defined(__aarch64__)
  #define OS_IS_ARM64 1
#else
  #define OS_IS_ARM64 0
#endif

#if defined(i386) || defined(__i386) || defined(__i386__) || defined(_M_I86) || defined(_M_IX86) || defined(__X86__) || defined(_X86_)
  #define OS_IS_I386 1
#else
  #define OS_IS_I386 0
#endif

#if defined(mips) || defined(__mips__) || defined(__mips) || defined(__MIPS__)
  #define OS_IS_MIPS 1
#else
  #define OS_IS_MIPS 0
#endif

#if defined(__powerpc) || defined(__powerpc__) ||  defined(__POWERPC__) || defined(__ppc__) || defined(__PPC__) || defined(_M_PPC)
  #define OS_IS_PPC 1
#else
  #define OS_IS_PPC 0
#endif

#if defined(__powerpc64) || defined(__powerpc64__) || defined(__ppc64) || defined(__ppc64__) || defined(__PPC64) || defined(__PPC64__)
  #define OS_IS_PPC64 1
  #define OS_IS_PPC 1
#else
  #define OS_IS_PPC64 0
#endif

#endif
