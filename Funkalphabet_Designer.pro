include(Gemeinsam.pri)

QT      += designer

CONFIG	+= plugin
TARGET=FunkalphabetDesigner


LIBS += -lFunkalphabet -Lbin

FORMS   += Dialoge/Funkalphabet.ui

HEADERS += Quellen/FunkalphabetPlugin.h

SOURCES += Quellen/FunkalphabetPlugin.cpp

OTHER_FILES +=FunkalphabetDesigner.json

DISTFILES += \
    Gemeinsam.pri

