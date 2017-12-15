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
  ifstream archivo;
  char* directorio = new char[200];

  cout<<"Ingrese el directorio del archivo: ";
  cin>>directorio;
  archivo.open(directorio,ios::in);
  if(archivo.fail()){
    cout<<" ## Archivo inexistente ## "<<endl;
    archivo.close();
  }else{
    editar* edit = new editar(directorio);
    char resp;
    Arraystack mystack;
    string cambio;
    do{
      cout<<"Dentro del texto: ";
      cout<<(*edit);
      cout<<endl<<"¿Que pondra de nuevo?: ";
      cin>>cambio;
      //mystack.push(cambio);
      cout<<"¿Desea volver a hacer cambios?: ";
      cin>>resp;
    }while(resp=='s'||resp=='S');
    delete edit;
  }
  delete [] directorio;
}

void creartexto(char* nombre){
  ofstream archivo;
  archivo.open(nombre,ios::out);
  if(archivo.fail()){
    cout<<" ### Ha habido un error al crear el archivo### ";
  }
  archivo.close();
}
