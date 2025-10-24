#include "NodoCola.hpp"

NodoCola::NodoCola(Aficionado* v, NodoCola* sig)
{
    valor = v;
    siguiente = sig;
}

NodoCola::~NodoCola()
{
    // El Aficionado se elimina en otra parte
}