#ifndef EDITAR_H
#define EDITAR_H

#include <string>
#include <fstream>

using namespace std;

class editar{

  private:
    ofstream* archivo_o;
    ifstream* archivo_i;

  public:
    editar();
    editar(ofstream*,ifstream*);
    friend ostream& operator <<(ostream&, const editar&);
    friend istream& operator >>(istream&,editar&);
};

#endif
