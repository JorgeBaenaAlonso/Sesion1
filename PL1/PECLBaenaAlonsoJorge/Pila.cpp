#include "Pila.hpp"

#include <iostream>

using namespace std;

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(Aficionado* v)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(v, ultimo); // Cambiado
    ultimo = nuevo;
    longitud++;
}

Aficionado* Pila::extraer()
{
    pnodoPila nodo;
    Aficionado* v; // Cambiado de int a Aficionado*

    if(!ultimo)
        return NULL;

    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ";
    while(aux) {
        cout << "ID:" << aux->valor->getId() << " | Tiempo de llegada: 18:" << aux->valor->getTiempoLlegada() << " | "
             << (aux->valor->getEsSocio() ? "SOCIO" : "SIMPATIZANTE") << endl;
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud() { return this->longitud; }

Pila::~Pila()
{
    pnodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}