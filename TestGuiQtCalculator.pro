#-------------------------------------------------
#
# Project created by QtCreator 2014-02-12T12:21:00
#
#-------------------------------------------------

QT       += testlib widgets

QT       -= gui

TARGET = tst_testguiqtcalculatortest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


INCLUDEPATH += "../QtCalculator/"
INCLUDEPATH += ../build-QtCalculator-Desktop_Qt_5_2_0_MinGW_32bit-Debug/

SOURCES += tst_testguiqtcalculatortest.cpp ../QtCalculator/dialog.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"
