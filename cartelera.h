#ifndef CARTELERA_H
#define CARTELERA_H
#include "pelicula.h"
#include <vector>
#include <iostream>

using namespace std;

class Cartelera
{
private:
    //    vector <Pelicula*> carteleras;
public:
    Cartelera();
    vector <Pelicula> carteleras;
    void darInformacion();
    string visualizar();

};

#endif // CARTELERA_H
