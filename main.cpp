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

    ab.preOrden();

    cout << "RAIZ:" << ab.raiz->valor << endl;
    return 1;
}
