TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    crc.c

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    crc.h

