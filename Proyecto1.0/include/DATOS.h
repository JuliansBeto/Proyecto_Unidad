#ifndef DATOS_H
#define DATOS_H
#include <istream>
#include <string.h>
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;
class DATOS
{
    public:
        DATOS() {}
        int i,j;
        char  nom [15][15];
        char  aux[15];
        int comp;
        string nom2[15];
        string bus;
        bool r=true;
        void nombres(){


         ifstream infile("Nombres.txt");
         for (i=0;i<15;i++){

            infile>>nom[i];
            }
         for (i=0;i<15;i++){

            cout <<"-"<<nom[i]<<endl;

         }
        }
        void nombres_orden(){

            ifstream infile("Nombres.txt");
            for (i=0;i<15;i++){

            infile>>nom[i];
            }
         for (i=0;i<15;++i){
        for ( j=0;j<14;++j){
           comp=strcmp(nom[j],nom[j+1]);
            if (comp>0){
                strcpy(aux,nom[j]);
                strcpy(nom[j],nom[j+1]);
                strcpy(nom[j+1],aux);
            }
          }
        }

    for (i=0;i<15;i++){

    cout <<"-"<<nom[i]<<endl;

    }
    }
    void buscar(){
ifstream infile("Nombres.txt");
    for (i=0;i<15;i++){
             infile>>nom2[i];
          }
    cout <<"introduce el nombre que desea buscar ponga la mayusculas en su sitio \n";
    cin>>bus;

     for (i=0;i<15;i++){

        if (bus==nom2[i]){
           cout<< "!si se encuentra este nombre esta en la linea: "<<i+1<<endl;
           r=false;
           break;

          }
        }
     if (r){
        cout << "no se encontro\n";
     }
}


protected:
private:
};

#endif // DATOS_H
