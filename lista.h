#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

class Nodo{
    public:
        int valor;
        Nodo * siguiente;
        Nodo(){
            this->valor = 0;
            this->siguiente = NULL;
        };
        Nodo(int nValor){
            this->valor = nValor;
            this->siguiente = NULL;
        }

        void liberar(){
            delete this->siguiente;
        }
};

class Lista{
    public:
        Nodo * pPrimero;
        Lista(){
            this->pPrimero = nullptr;
        }

        void insertar(int nuevoValor){
            if (!this->pPrimero){
                cout << "Insertando por primera vez" << endl;
                this->pPrimero = new Nodo(nuevoValor);
            } else {
                Nodo * aux = this->pPrimero;
                for (; aux->siguiente; aux = aux->siguiente);
                aux->siguiente = new Nodo(nuevoValor);
            }
        }

        void mostrar(){
            Nodo * aux = this->pPrimero;
            for (; aux; aux = aux->siguiente){
                cout << aux->valor << ", ";
            }
            cout << endl;
        }
};

#endif // LISTA_H
