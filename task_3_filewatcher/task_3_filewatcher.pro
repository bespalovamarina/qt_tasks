QT += core gui widgets

CONFIG += c++11
CONFIG -= console

SOURCES += \
        abstractdirectorystrategy.cpp \
        directorystatsmainwindow.cpp \
        filestatmodel.cpp \
        groupfilestrategy.cpp \
        listfilestrategy.cpp \
        main.cpp

DESTDIR = $$PWD/../out

HEADERS += \
    abstractdirectorystrategy.h \
    directorystatsmainwindow.h \
    filestatmodel.h \
    groupfilestrategy.h \
    listfilestrategy.h

SUBDIRS += \
    filewatcher.pro

FORMS += \
    directorystatsmainwindow.ui
