#include "boleto.h"

Boleto::Boleto()
{
    this->numSala = 0;
}

void Boleto::generaSala()
{

    srand(time(NULL));
    numSala = 1+rand()%(11-1);
}

string Boleto::imprimirBoleto()
{
    string str3 =
            "╔===========================================═╗\n║   Sala: " + to_string(this->numSala) + "           ║\n" +
            "║   Hora: " + to_string(this->peli->getHora()) + " : " + to_string(this->peli->getMinuto()) + "           ║\n" +
            "║   Asiento: " + this->vis->getFila() + to_string(this->vis->getColum()) + "           ║ " + "\n" +
            "║   Pelicula: " + this->peli->getTitulo() + "           ║ " + "\n" +
            "╚===========================================═╝\n";
    return str3;
}
