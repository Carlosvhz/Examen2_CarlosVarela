#include "editar.h"

editar::editar(char* pdirectorio){
  directorio = pdirectorio;
}

istream& operator >>(istream& input, editar& objeto){

  return input;
}

ostream& operator <<(ostream& output, const editar& objeto){
  ifstream archivo;
  archivo.open(objeto.directorio,ios::in);
  if(!archivo.fail()){
    string texto;
    while(!archivo.eof()){
      getline(archivo,texto);
      output<<texto;
    }
  }
  archivo.close();
  return output;
}

editar::~editar(){

}
