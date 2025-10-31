#include <iostream>
#include <stdlib.h>
#include "Aficionados.hpp"

// Constructor
Aficionado::Aficionado(int id)
{
    this->id = id;
    this->tiempoLlegada = rand() % 60;
    this->esSocio = (id%2==0);
}

// Getters
int Aficionado::getId() { 
	return this->id; 
}

int Aficionado::getTiempoLlegada() { 
	return this->tiempoLlegada;
 }

bool Aficionado::getEsSocio() { 
	return this->esSocio; 
	}

// Setters
void Aficionado::setId(int nuevoId) { id = nuevoId; }

void Aficionado::setTiempoLlegada(int tiempo) { tiempoLlegada = tiempo; }

void Aficionado::setEsSocio(bool socio) { esSocio = socio; }

// Método para mostrar información
void Aficionado::mostrarInfo() const
{
    std::cout << "Aficionado ID: " << id << " | Llegada: 18:" << tiempoLlegada << " | "
         << (esSocio ? "SOCIO" : "SIMPATIZANTE") << std::endl;
}
