#-------------------------------------------------
#
# Project created by QtCreator 2014-09-01T20:56:28
#
#-------------------------------------------------

QT      += core gui
QT      += xml
QT      += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gpxWPto580
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    waypointmaster.cpp \
    waypointlist.cpp

HEADERS  += mainwindow.h \
    waypointmaster.h \
    waypointlist.h

FORMS    += mainwindow.ui
