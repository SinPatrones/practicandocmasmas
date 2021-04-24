#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <iostream>

using namespace std;

class Nodo{
    public:
        int valor;
        Nodo * derecha;
        Nodo * izquierda;
        Nodo(){
            this->valor = 0;
            this->derecha = nullptr;
            this->izquierda = nullptr;
        }
        Nodo(int nuevoValor){
            this->valor = nuevoValor;
            this->derecha = nullptr;
            this->izquierda = nullptr;
        }
};

class ArbolBinario{
    public:
        Nodo * raiz;
        ArbolBinario(){
            this->raiz = nullptr;
        }

        void insertar(int nuevoValor){
            if (!this->raiz){
                this->raiz = new Nodo(nuevoValor);
            } else {

            }
        }
};




#endif // ARBOLBINARIO_H
