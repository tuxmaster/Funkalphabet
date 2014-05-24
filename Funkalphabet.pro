#-------------------------------------------------
#
# Project created by QtCreator 2014-05-24T21:38:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Funkalphabet
TEMPLATE = app


SOURCES += Quellen/Haupt.cpp\
	   Quellen/DlgHauptfenster.cpp\
	   Quellen/Hilfsfunktionen.cpp

HEADERS  += Quellen/DlgHauptfenster.h \
	    Quellen/Hilfsfunktionen.h\
	    Quellen/Vorgaben.h

FORMS    += Dialoge/Hauptfenster.ui
