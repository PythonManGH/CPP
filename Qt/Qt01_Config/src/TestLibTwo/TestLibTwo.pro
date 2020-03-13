SOURCES += xsocket.cpp
HEADERS += xsocket.h \
    xglobal.h
TARGET=testlib

# situation one ---- Only generate shared lib
#TEMPLATE=lib

# situation two ---- Only generate static lib
#TEMPLATE=lib
#CONFIG+=staticlib

# situation three ---- Generate shared lib and static lib
TEMPLATE=lib
DEFINES+=TESTLIBTWO_LIB
DESTDIR=../../lib
DLLDESTDIR=../../bin


