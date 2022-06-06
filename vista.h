#ifndef VISTA_H
#define VISTA_H

#include <iostream>
#include <string>
#include <vector>

#include "cartelera.h"
#include "sala.h"
#include "boleto.h"

using namespace std;

class Vista
{
private:
    Cartelera *cartel;

    string fila;
    int colum;

//    vector <Cartelera* > carteleras;
public:
    Sala *salita;
    Boleto *boletin;
    Vista();

    void imprimir();
    void imprimirSala();
    void editarSala();
    void imprimirBoleto();

    const string &getFila() const;
    int getColum() const;
};

#endif // VISTA_H
