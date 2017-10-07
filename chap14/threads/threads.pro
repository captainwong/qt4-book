TEMPLATE      = app
CONFIG       += console thread
HEADERS       = thread.h \
                threaddialog.h
SOURCES       = main.cpp \
                thread.cpp \
                threaddialog.cpp
QT		+= core gui widgets
