#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T19:10:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CHMOD
TEMPLATE = app

QMAKE_CXXFLAGS += -Wno-maybe-uninitialized

SOURCES += main.cpp\
        dialog.cpp \
    remember.cpp \
    shortcuts.cpp \
    symbolic.cpp \
    generation.cpp

HEADERS  += dialog.h \
    symbolic.h \
    remember.h \
    generation.h \
    shortcuts.h

FORMS    += dialog.ui \
    symbolic.ui
