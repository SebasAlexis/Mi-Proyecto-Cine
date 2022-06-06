#include "vista.h"

#include <iostream>

using namespace std;

const string &Vista::getFila() const
{
    return fila;
}

int Vista::getColum() const
{
    return colum;
}

Vista::Vista()
{
    this->cartel = new Cartelera();
    this->boletin= new Boleto();
    this->fila = "";
    this->colum = 0;
}

void Vista::imprimir()
{
    cout << this->cartel->visualizar();

}

void Vista::imprimirSala()
{

    int npeli;
    cout << "Que pelicula quiere ver?, INGRESE EL ID: ";
    cin >> npeli;
    cout << salita->salaPelicula(npeli);
    cout << salita->asientos();
    // cout << this->salita->imprimir();

    //    do{


    //            break;
    //        case 2:
    //

    //            break;

    //        }
    //    }while(opc!=3);
}

void Vista::editarSala()
{
    int i=0, num=0, cm=0;
    string A[4][4] = {{" ","1","2","3"},{"A","O","O","O"},{"B","O","O","O"},{"C","O","O","O"}};
    do{
        cout << "Cuantos asientos va a escojer?: ";
        cin >> num;
        if(num<0){
            cout << "NUMERO ERRONEO\n\n";
        }
    }while(num<0);
    do{
        do{
            cout<<"Ingrese que fila va a elegir [A]: ";
            cin>>this->fila;

            if(this->fila=="A"){
                cm=1;
            }else if(this->fila=="B"){
                cm=2;
            }else if(this->fila=="C"){
                cm=3;
            }else if(this->fila!="A" || fila!="B" || fila!="C"){
                cout << "FILLA ERRONEA\n";
            };
        }while(this->fila!="A" && this->fila!="B" && this->fila!="C");

        do{
            cout<<"Ingrese que columna va a elegir [0]: ";
            cin>>this->colum;
            if(this->colum < 1 || this->colum > 3){
                cout << "COLUMNA ERRONEA\n";
            }
        }while(this->colum < 1 || this->colum > 3);

        A[cm][colum] = "X";
        i++;
    }while(i<num);
}

void Vista::imprimirBoleto()
{
    cout << this->boletin->imprimirBoleto();
}


