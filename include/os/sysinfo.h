#ifndef ZZ_OS_SYSINFO_H
#define ZZ_OS_SYSINFO_H

/**
 * Load `sysinfo()`
 */
#if !OS_IS_WINDOWS && !OS_IS_APPLE
  #include <sys/sysinfo.h>
#else
  struct _sysinfo { long uptime; }
  typedef struct sysinfo sysinfo_t;
  int sysinfo(sysinfo_t *info);
#endif

#endif
