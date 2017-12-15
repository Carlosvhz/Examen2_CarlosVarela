#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Stack.h"

class ArrayStack: public Stack{

  private:
    char* array;
    int size;
    int posicion;

  public:
    ArrayStack();
    virtual bool push(string);
    virtual string pop();
    virtual bool isEmpty();
    ~ArrayStack();
};

#endif
