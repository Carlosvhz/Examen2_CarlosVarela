#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <string>

using namespace std;

class Arraystack{

  private:
    string array[5];
    int posicion;

  public:
    bool push(string);
    string pop();
    bool isEmpty();
};

#endif
