#include "Cola.hpp"

#include <cstdlib>
#include <iostream>

using namespace std;

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(Aficionado* v)
{
    pnodoCola nuevo;
    nuevo = new NodoCola(v);

    if(ultimo)
        ultimo->siguiente = nuevo;

    ultimo = nuevo;

    if(!primero)
        primero = nuevo;
    longitud++;
}

void Cola::mostrar()
{
    pnodoCola aux = primero;
    cout << "\tContenido de la cola:" << endl;
    while(aux) {
        aux->valor->mostrarInfo();
        aux = aux->siguiente;
    }
}

Aficionado* Cola::eliminar()
{
    pnodoCola nodo;
    Aficionado* v;

    nodo = primero;
    if(!nodo)
        return NULL;

    primero = nodo->siguiente;
    v = nodo->valor;
    delete nodo;

    if(!primero)
        ultimo = NULL;
    longitud--;
    return v;
}


bool Cola::estaVacia() { return primero == NULL; }

int Cola::getLongitud() { return longitud; }

Cola::~Cola()
{
    while(primero)
        eliminar();
}