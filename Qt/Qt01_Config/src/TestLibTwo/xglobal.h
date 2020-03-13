#ifndef XGLOBAL_H
#define XGLOBAL_H
#include<QtCore/qglobal.h>

#ifdef TESTLIBTWO_LIB
#define XEXPORT Q_DECL_EXPORT
#else
#define XEXPORT Q_DECL_IMPORT
#endif



#endif // XGLOBAL_H
