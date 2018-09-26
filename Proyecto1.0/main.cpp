#include <iostream>
#include <fstream>
#include "DATOS.h"
#include <string.h  >
using namespace std;

int main()
{
bool z=true;

    DATOS d;
    int decision;
    cout << "binevenido al programa" << endl;
    cout << "binevenido los nombres son" << endl;
      d.nombres();
do{
    cout << " 1 introdusca; para ordenar\n 2 Para verificar si se encuentra;\n 3 Para salir\n";
    cin >>decision;

switch
(decision){
  case 1:
       d.nombres_orden();

  break;
  case 2:
      d.buscar();
      break;
    break;

  case 3:
    z=false;
    break;
};
}while(z);

 cout << "YA SALISTE APESCA CUALQUIER TECLA\n";
    return 0;
}
