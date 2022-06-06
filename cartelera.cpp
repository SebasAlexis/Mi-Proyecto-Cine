#include "cartelera.h"


void Cartelera::darInformacion()
{
    Pelicula p;
    p = Pelicula (17,20,"The Batman",120,"* ESTRENO *");
    carteleras.push_back(p);
    p = Pelicula (12,40,"Sonic",130,"");
    carteleras.push_back(p);
}

Cartelera::Cartelera()
{
    this->darInformacion();
}


string Cartelera::visualizar()
{

    string str = "";
    for(int i=0;i<carteleras.size();i++){
        str += carteleras.at(i).getDatos();
    }
    return str;
}
