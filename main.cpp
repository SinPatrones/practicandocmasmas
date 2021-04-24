#include <iostream>
#include "lista.h"

using namespace std;

int main(){

    Lista lista;

    lista.insertar(4);
    lista.insertar(6);
    lista.insertar(10);
    lista.insertar(11);

    lista.mostrar();

    return 1;
}
