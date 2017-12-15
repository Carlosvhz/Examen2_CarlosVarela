#include <iostream>
#include "Arraystack.h"
#include "editar.h"
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

/* == Prototipo == */
void creartexto(char*);
void editartexto();


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
        char* nombre = new char[10];
        cout<<endl<<"__ Crear un archivo __"<<endl
            <<"Ingrese el nombre del archivo (Junto con .txt): ";
        cin>>nombre;
        creartexto(nombre);
        delete []nombre;
        cout<<" ## Archivo creado ## "<<endl;
      }
        break;
      case 2:{
        cout<<endl<<"__ Editar archivo __"<<endl;
        editartexto();
      }
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


void editartexto(){
  editar* edit;
  ofstream archivo_o;
  ifstream archivo_i;
  char* directorio = new char[200];
  cout<<"Ingrese el directorio del archivo: ";
  cin>>directorio;
  archivo_o.open(directorio,ios::out);
  archivo_i.open(directorio,ios::in);
  if(archivo_o.fail()||archivo_i.fail()){
    cout<<" ## Archivo inexistente ## "<<endl;
    archivo_o.close();
    archivo_i.close();
  }else{
    char resp;
    Arraystack mystack;
    edit = new editar();
    do{

      cout<<"¿Desea volver a hacer cambios?: ";
      cin>>resp;
    }while(resp=='s'||resp=='S');
  }
}

void creartexto(char* nombre){
  ofstream archivo;
  archivo.open(nombre,ios::out);
  if(archivo.fail()){
    cout<<" ### Ha habido un error al crear el archivo### ";
  }
  archivo.close();
}
