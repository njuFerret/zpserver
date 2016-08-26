#ifndef CONFIG_H
#define CONFIG_H

#ifdef QT_NO_SSL
#define ZP_WANTSSL 0
#else
#define ZP_WANTSSL 1
#endif

#endif // CONFIG_H
