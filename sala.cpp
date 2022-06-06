#include "sala.h"

Sala::Sala()
{

}

string Sala::asientos()
{
    string A[4][4] = {{" ","1","2","3"},{"A","O","O","O"},{"B","O","O","O"},{"C","O","O","O"}};
    string str2;
    int bandera = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            str2 += A[i][j] + " ";
            bandera ++;
            if(bandera == 4 ){
                str2 += "\n";
                bandera = 0;
            }
        }

    }
    return str2 + "\n";
}

string Sala::salaPelicula(int npeli)
{
    string str1 = "";
    int a=0;
    a=cartel->carteleras.size();
    Pelicula p;
    for(int i=0; i < a; i++){
        if(p.getId() == npeli){
            str1 += "La pelicual escojida es: " + cartel->carteleras.at(i).getDatos() + " \n";
        }
    }

    return str1;
}






