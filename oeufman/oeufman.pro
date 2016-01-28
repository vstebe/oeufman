QT += core
QT -= gui

CONFIG += c++11

TARGET = oeufman
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    node.cpp

HEADERS += \
    node.h
