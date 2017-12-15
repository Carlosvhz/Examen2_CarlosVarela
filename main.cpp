#include <iostream>
#include "Stack.h"
#include "Arraystack.h"
#include <string>
#include <fstream>

using namespace std;

/* == Prototipo == */
void creartexto(string);

int main(){
  for(int i=0;i<3;i++){cout<<endl;}
  cout<<" ==== Examen #2 ==== "<<endl;
  int op;
  char resp;
  do{
    cout<<"1. Crear archivo de texto"<<endl
        <<"2. Editar archivo de texto"<<endl
        <<"Ingrese opcion: ";
    cin>>op;
    switch (op) {
      case 1:{
        string nombre;
        cout<<endl<<"__ Crear un archivo __"<<endl
            <<"Ingrese el nombre del archivo: ";
        creartexto(nombre);
        cout<<" ## Archivo creado ## "<<endl;
      }
        break;
      case 2:{ }
        break;
      default:
        cout<<" ## No hay numero para este ejercicio ## "<<endl;
        break;
    }
    cout<<"¿Continuar?[s]: ";
    cin>>resp;
  }while(resp == 's'|| resp == 'S');
  cout<<" Bye :3 "<<endl;
  return 0;
}

void creartexto(string nombre){
  ofstream archivo;
  nombre+=".txt";
  //archivo.open();
}
