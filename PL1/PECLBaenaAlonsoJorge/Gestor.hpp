#ifndef GESTOR_HPP
#define GESTOR_HPP

#include "Pila.hpp"
#include "Cola.hpp"
#include "Lista.hpp"
#include <ctime>
#include <algorithm>
#include <iostream>

class Gestor
{
public:
	Gestor();
	~Gestor();
	
	void genera10Aficionados();
	void muestraAficionados();
	void borraAficionadosPila();
	void encolarAficionados();
	void muestraSociosCola();
	void muestraSimpatizantesCola();
	void borraAficionadosColas();
	void enlistarAficionados();
	void buscarAficionados();
	void reiniciar();
	int AficionadosEnPila();
	int SociosEnCola();
	int SimpatizantesEnCola();
	
private:
	Pila pilaAficionado;
	int ronda;
	Cola colaSocios;
	Cola colaSimpatizantes;
};

#endif // GESTOR_HPP
