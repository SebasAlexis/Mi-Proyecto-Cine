TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        boleto.cpp \
        cartelera.cpp \
        main.cpp \
        pelicula.cpp \
        sala.cpp \
        vista.cpp

HEADERS += \
    boleto.h \
    cartelera.h \
    pelicula.h \
    sala.h \
    vista.h
