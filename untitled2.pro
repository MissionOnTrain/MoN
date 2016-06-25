#-------------------------------------------------
#
# Project created by QtCreator 2016-06-20T21:13:44
#
#-------------------------------------------------

QT       += core gui\
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    person.cpp \
    user.cpp \
    weapon.cpp \
    train.cpp \
    gunshot.cpp \
    weapon1.cpp \
    weapon2.cpp \
    diamond.cpp \
    heart.cpp \
    enemy1.cpp \
    enemy2.cpp

HEADERS  += mainwindow.h \
    person.h \
    user.h \
    weapon.h \
    train.h \
    gunshot.h \
    weapon2.h \
    weapon1.h \
    diamond.h \
    heart.h \
    enemy1.h \
    enemy2.h

FORMS    += mainwindow.ui

RESOURCES += \
    pics.qrc
