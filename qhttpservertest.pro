#-------------------------------------------------
#
# Project created by QtCreator 2013-05-31T16:53:59
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = qhttpservertest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    myhttpserver.cpp \
    myresponder.cpp

HEADERS += \
    myhttpserver.h \
    myresponder.h

unix|win32: LIBS += -lqhttpserver
