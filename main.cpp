#include <iostream>

#include "cartelera.h"
#include "pelicula.h"
#include "vista.h"

using namespace std;

int Pelicula::totalPeliculas=0;

int main()
{
    Vista v;
    v.imprimir();
    v.imprimirSala();
    v.editarSala();

    return 0;
}
