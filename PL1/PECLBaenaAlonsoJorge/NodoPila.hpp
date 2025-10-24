#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <cstdlib>
using namespace std;
#include "Aficionados.hpp"

class NodoPila
{
public:
    NodoPila(Aficionado* v, NodoPila* sig = NULL); // Cambiado
    ~NodoPila();

private:
    Aficionado* valor; // Cambiado de int a Aficionado*
    int tiempoAcceso;  // Nuevo: minuto en que accedió
    NodoPila* siguiente;
    friend class Pila;
};

typedef NodoPila* pnodoPila;

#endif