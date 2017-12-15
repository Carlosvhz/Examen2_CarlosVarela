#ifndef STACK_H
#define STACK_H

#include <string>

using namespace std;

class Stack{

  public:
    virtual bool push(char)=0;
    virtual string pop()=0;
    virtual bool isEmpty()=0;

};

#endif
