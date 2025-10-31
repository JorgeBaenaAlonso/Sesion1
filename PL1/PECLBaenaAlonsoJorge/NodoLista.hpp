#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP
#include <cstdlib>
using namespace std;
#include "Aficionados.hpp"
class NodoLista
{
public:
    NodoLista(Aficionado* v, NodoLista* sig = NULL);
    ~NodoLista();

private:
    Aficionado* valor;
    int tiempoLlegada;
    NodoLista* siguiente;
    friend class Cola;
};
typedef NodoLista* pnodoLista;

#endif // NODOLISTA_HPP