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

int main(){

    Lista lista;

    lista.insertar(4);
    lista.insertar(6);
    lista.insertar(10);
    lista.insertar(11);

    lista.mostrar();

    return 1;
}
