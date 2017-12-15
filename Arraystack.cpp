#include "ArrayStack.h"

ArrayStack::ArrayStack(){
  size = 5;
  array = new string[p_size];
  posicion = 0;
}

bool ArrayStack::push(string cadena){
  if(posicion == size){
    posicion = 0;
    array[pos]=cadena;
    return true;
  }else{
    array[pos++]=cadena;
    return true;
  }
  return false;
}

string ArrayStack::pop(){
  if(isEmpty()){
    return 0;
  }else{
    string retornar = array[posicion-1];
    posicion--;
    return retornar;
  }
}

bool ArrayStack::isEmpty(){
  if(posicion==0){
    return false;
  }
  return true;
}

ArrayStack::~ArrayStack(){}
