#include "Arraystack.h"

bool Arraystack::push(string cadena){
  if(posicion == 5){
    posicion = 0;
    array[posicion]=cadena;
    return true;
  }else{
    array[posicion++]=cadena;
    return true;
  }
  return false;
}

string Arraystack::pop(){
  if(isEmpty()){
    return 0;
  }else{
    string retornar = array[posicion-1];
    posicion--;
    return retornar;
  }
}

bool Arraystack::isEmpty(){
  if(posicion==0){
    return false;
  }
  return true;
}
