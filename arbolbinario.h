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
            Nodo ** aux = &this->raiz;
            while (*aux){
                if (nuevoValor > (*aux)->valor){
                    aux = &(*aux)->derecha;
                } else {
                    aux = &(*aux)->izquierda;
                }
            }
            *aux = new Nodo(nuevoValor);

        }

        void preOrden(Nodo * nodo){
            if (nodo){
                cout << nodo->valor << ", ";
                this->preOrden(nodo->izquierda);
                this->preOrden(nodo->derecha);
            }
        }
};




#endif // ARBOLBINARIO_H
