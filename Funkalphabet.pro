#-------------------------------------------------
#
# Project created by QtCreator 2014-05-24T21:38:31
#
#-------------------------------------------------

include(Gemeinsam.pri)
QT += sql printsupport

VERSION = 0.2.0

TARGET = Funkalphabet

SOURCES += Quellen/Datenmodell.cpp \
    Quellen/Uebersetzen.cpp \
    Quellen/Funkalphabet.cpp

HEADERS  += Quellen/Vorgaben.h \
    Quellen/Datenmodell.h \
    Quellen/Uebersetzen.h \
    Quellen/Funkalphabet.h

FORMS    +=  Dialoge/Funkalphabet.ui

Datenbank.commands = ./DB_erstellen.sh
Datenbank.depends = $(TARGET)

QMAKE_EXTRA_TARGETS += Datenbank

RESOURCES += Bilder/Bilder.qrc \
    Datenbank.qrc

DISTFILES += \
    Gemeinsam.pri
