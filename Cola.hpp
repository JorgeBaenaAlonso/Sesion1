#ifndef COLA_HPP
#define COLA_HPP

#include "Aficionados.hpp"
#include "NodoCola.hpp"

class Cola
{
public:
    Cola();
    ~Cola();

    void insertar(Aficionado* v);
    Aficionado* eliminar();
	void vaciar();
    Aficionado* verPrimero();
    bool estaVacia();
    void mostrar();
    int getLongitud();

private:
    pnodoCola primero;
    pnodoCola ultimo;
    int longitud;
};

#endif