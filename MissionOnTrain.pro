#-------------------------------------------------
#
# Project created by QtCreator 2016-06-23T11:06:39
#
#-------------------------------------------------

QT       += core gui\
        multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MissionOnTrain
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    person.cpp \
    gunshot.cpp \
    pics.cpp \
    weapon.cpp \
    train.cpp \
    player.cpp \
    weapon1.cpp \
    weapon2.cpp \
    heart.cpp \
    diamond.cpp \
    enemy.cpp

HEADERS  += mainwindow.h \
    gunshot.h \
    person.h \
    pics.h \
    train.h \
    weapon.h \
    player.h \
    weapon1.h \
    weapon2.h \
    heart.h \
    diamond.h \
    enemy.h

FORMS    += mainwindow.ui

RESOURCES += \
    train.qrc
