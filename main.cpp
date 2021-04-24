#include <iostream>
#include "arbolbinario.h"

using namespace std;

int main(){

    ArbolBinario ab;

    ab.insertar(29);
    ab.insertar(50);
    ab.insertar(15);
    ab.insertar(40);
    ab.insertar(70);

    ab.preOrden(ab.raiz);

    cout << "RAIZ:" << ab.raiz->valor << endl;

    //hola tilin
    return 1;
}
