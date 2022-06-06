#ifndef BOLETO_H
#define BOLETO_H
#include "pelicula.h"
#include "vista.h"
#include <time.h>


class Boleto
{
private:
    Pelicula *peli;

    int numSala;
public:
    Vista *vis;
    Boleto();
    void generaSala();
    string imprimirBoleto();

};

#endif // BOLETO_H
