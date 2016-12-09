TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    CCRC32.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    CCRC32.h

