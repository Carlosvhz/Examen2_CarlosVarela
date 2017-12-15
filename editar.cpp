#include "editar.h"

editar::editar(){}

editar(ofstream* ofs, ifstream* ifs){
  archivo_o = ofs;
  archivo_i = ifs;
}
istream& operator >>(istream& input, editar& objeto){

  return input;
}

ostream& operator <<(ostream& output, const editar& objeto){
  if(!archivo_i->fail()){
    while(!archivo_i->eof()){

    }
  }
  return output;
}
