#ifndef LISTA_HPP
#define LISTA_HPP
#include "NodoLista.hpp"
#include "Aficionados.hpp"
#include "Cola.hpp"
#include "Gestor.hpp"

class Lista
{
public:
	Lista();
	~Lista();
	void insertar(Aficionado* v);
private:
	int longuitud;
	pnodoLista ultimo;
	pnodoLista primero;
};

#endif // LISTA_HPP
