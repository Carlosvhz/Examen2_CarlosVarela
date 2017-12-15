#ifndef EDITAR_H
#define EDITAR_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class editar{

  private:
    char* directorio;

  public:
    editar(char*);
    ~editar();
    friend ostream& operator <<(ostream&, const editar&);
    friend istream& operator >>(istream&,editar&);
};

#endif
