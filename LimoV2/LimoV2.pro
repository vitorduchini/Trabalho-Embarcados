QT       += core gui
QT       += core
QT       += network
QT       -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
TARGET = MyFirstServer
CONFIG   += console
CONFIG   -= app_bundle


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    server.cpp

HEADERS += \
    mainwindow.h \
    server.h

FORMS += \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
