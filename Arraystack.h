#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <string>
#include "Stack.h"

using namespace std;

class ArrayStack: public Stack{

  private:
    string array[5];
    int posicion;

  public:
    ArrayStack();
    virtual bool push(string);
    virtual string pop();
    virtual bool isEmpty();
    ~ArrayStack();
};

#endif
