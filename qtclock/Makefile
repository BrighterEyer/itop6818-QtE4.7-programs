#############################################################################
# Makefile for building: qtclock
# Generated by qmake (2.01a) (Qt 4.7.1) on: Thu Nov 16 18:58:25 2017
# Project:  qtclock.pro
# Template: app
# Command: /opt/qt-4.7.1/bin/qmake -o Makefile qtclock.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-linux-gcc
CXX           = arm-linux-g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../../qt-4.7.1/mkspecs/qws/linux-arm-g++ -I. -I../../../qt-4.7.1/include/QtCore -I../../../qt-4.7.1/include/QtNetwork -I../../../qt-4.7.1/include/QtGui -I../../../qt-4.7.1/include -I.
LINK          = arm-linux-g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/opt/qt-4.7.1/lib
LIBS          = $(SUBLIBS)  -L/opt/qt-4.7.1/lib -lQtGui -L/usr/local/tslib/lib -L/opt/qt-4.7.1/lib -lQtNetwork -lQtCore -lpthread 
AR            = arm-linux-ar cqs
RANLIB        = 
QMAKE         = /opt/qt-4.7.1/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = arm-linux-strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		qtclock.cpp moc_qtclock.cpp
OBJECTS       = main.o \
		qtclock.o \
		moc_qtclock.o
DIST          = ../../../qt-4.7.1/mkspecs/common/g++.conf \
		../../../qt-4.7.1/mkspecs/common/unix.conf \
		../../../qt-4.7.1/mkspecs/common/linux.conf \
		../../../qt-4.7.1/mkspecs/common/qws.conf \
		../../../qt-4.7.1/mkspecs/qconfig.pri \
		../../../qt-4.7.1/mkspecs/features/qt_functions.prf \
		../../../qt-4.7.1/mkspecs/features/qt_config.prf \
		../../../qt-4.7.1/mkspecs/features/exclusive_builds.prf \
		../../../qt-4.7.1/mkspecs/features/default_pre.prf \
		../../../qt-4.7.1/mkspecs/features/release.prf \
		../../../qt-4.7.1/mkspecs/features/default_post.prf \
		../../../qt-4.7.1/mkspecs/features/warn_on.prf \
		../../../qt-4.7.1/mkspecs/features/qt.prf \
		../../../qt-4.7.1/mkspecs/features/unix/thread.prf \
		../../../qt-4.7.1/mkspecs/features/moc.prf \
		../../../qt-4.7.1/mkspecs/features/resources.prf \
		../../../qt-4.7.1/mkspecs/features/uic.prf \
		../../../qt-4.7.1/mkspecs/features/yacc.prf \
		../../../qt-4.7.1/mkspecs/features/lex.prf \
		../../../qt-4.7.1/mkspecs/features/include_source_dir.prf \
		qtclock.pro
QMAKE_TARGET  = qtclock
DESTDIR       = 
TARGET        = qtclock

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: qtclock.pro  ../../../qt-4.7.1/mkspecs/qws/linux-arm-g++/qmake.conf ../../../qt-4.7.1/mkspecs/common/g++.conf \
		../../../qt-4.7.1/mkspecs/common/unix.conf \
		../../../qt-4.7.1/mkspecs/common/linux.conf \
		../../../qt-4.7.1/mkspecs/common/qws.conf \
		../../../qt-4.7.1/mkspecs/qconfig.pri \
		../../../qt-4.7.1/mkspecs/features/qt_functions.prf \
		../../../qt-4.7.1/mkspecs/features/qt_config.prf \
		../../../qt-4.7.1/mkspecs/features/exclusive_builds.prf \
		../../../qt-4.7.1/mkspecs/features/default_pre.prf \
		../../../qt-4.7.1/mkspecs/features/release.prf \
		../../../qt-4.7.1/mkspecs/features/default_post.prf \
		../../../qt-4.7.1/mkspecs/features/warn_on.prf \
		../../../qt-4.7.1/mkspecs/features/qt.prf \
		../../../qt-4.7.1/mkspecs/features/unix/thread.prf \
		../../../qt-4.7.1/mkspecs/features/moc.prf \
		../../../qt-4.7.1/mkspecs/features/resources.prf \
		../../../qt-4.7.1/mkspecs/features/uic.prf \
		../../../qt-4.7.1/mkspecs/features/yacc.prf \
		../../../qt-4.7.1/mkspecs/features/lex.prf \
		../../../qt-4.7.1/mkspecs/features/include_source_dir.prf \
		/opt/qt-4.7.1/lib/libQtGui.prl \
		/opt/qt-4.7.1/lib/libQtNetwork.prl \
		/opt/qt-4.7.1/lib/libQtCore.prl
	$(QMAKE) -o Makefile qtclock.pro
../../../qt-4.7.1/mkspecs/common/g++.conf:
../../../qt-4.7.1/mkspecs/common/unix.conf:
../../../qt-4.7.1/mkspecs/common/linux.conf:
../../../qt-4.7.1/mkspecs/common/qws.conf:
../../../qt-4.7.1/mkspecs/qconfig.pri:
../../../qt-4.7.1/mkspecs/features/qt_functions.prf:
../../../qt-4.7.1/mkspecs/features/qt_config.prf:
../../../qt-4.7.1/mkspecs/features/exclusive_builds.prf:
../../../qt-4.7.1/mkspecs/features/default_pre.prf:
../../../qt-4.7.1/mkspecs/features/release.prf:
../../../qt-4.7.1/mkspecs/features/default_post.prf:
../../../qt-4.7.1/mkspecs/features/warn_on.prf:
../../../qt-4.7.1/mkspecs/features/qt.prf:
../../../qt-4.7.1/mkspecs/features/unix/thread.prf:
../../../qt-4.7.1/mkspecs/features/moc.prf:
../../../qt-4.7.1/mkspecs/features/resources.prf:
../../../qt-4.7.1/mkspecs/features/uic.prf:
../../../qt-4.7.1/mkspecs/features/yacc.prf:
../../../qt-4.7.1/mkspecs/features/lex.prf:
../../../qt-4.7.1/mkspecs/features/include_source_dir.prf:
/opt/qt-4.7.1/lib/libQtGui.prl:
/opt/qt-4.7.1/lib/libQtNetwork.prl:
/opt/qt-4.7.1/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile qtclock.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/qtclock1.0.0 || $(MKDIR) .tmp/qtclock1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/qtclock1.0.0/ && $(COPY_FILE) --parents qtclock.h .tmp/qtclock1.0.0/ && $(COPY_FILE) --parents main.cpp qtclock.cpp .tmp/qtclock1.0.0/ && (cd `dirname .tmp/qtclock1.0.0` && $(TAR) qtclock1.0.0.tar qtclock1.0.0 && $(COMPRESS) qtclock1.0.0.tar) && $(MOVE) `dirname .tmp/qtclock1.0.0`/qtclock1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/qtclock1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_qtclock.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_qtclock.cpp
moc_qtclock.cpp: qtclock.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) qtclock.h -o moc_qtclock.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.cpp qtclock.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

qtclock.o: qtclock.cpp qtclock.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtclock.o qtclock.cpp

moc_qtclock.o: moc_qtclock.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qtclock.o moc_qtclock.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

