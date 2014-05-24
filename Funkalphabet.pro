#-------------------------------------------------
#
# Project created by QtCreator 2014-05-24T21:38:31
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Funkalphabet
UI_DIR=tmp/ui
MOC_DIR=tmp/moc
OBJECTS_DIR=tmp/obj
RCC_DIR=tmp/rcc

TEMPLATE = app


SOURCES += Quellen/Haupt.cpp\
	   Quellen/DlgHauptfenster.cpp\
	   Quellen/Hilfsfunktionen.cpp \
    Quellen/Datenmodell.cpp

HEADERS  += Quellen/DlgHauptfenster.h \
	    Quellen/Hilfsfunktionen.h\
	    Quellen/Vorgaben.h \
    Quellen/Datenmodell.h

FORMS    += Dialoge/Hauptfenster.ui

Datenbank.commands = ./DB_erstellen.sh
Datenbank.depends = $(TARGET)

QMAKE_EXTRA_TARGETS += Datenbank

RESOURCES += Bilder/Bilder.qrc
