#ifndef SALA_H
#define SALA_H
#include <string>
#include <vector>

#include "pelicula.h"
#include "cartelera.h"

using namespace std;

class Sala
{
private:
    Cartelera *cartel;
public:
    Sala();
    string asientos();
    string salaPelicula(int npeli);
};

#endif // SALA_H
