#ifndef CUSTOMCONTROLS_GLOBAL_H
#define CUSTOMCONTROLS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CUSTOMCONTROLS_LIBRARY)
#  define CUSTOMCONTROLSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CUSTOMCONTROLSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CUSTOMCONTROLS_GLOBAL_H
