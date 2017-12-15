#ifndef STACK_H
#define STACK_H

#include "archivo.h"

class Stack{

  public:
    virtual bool push(char)=0;
    virtual char pop()=0;
    virtual bool isEmpty()=0;

};

#endif
