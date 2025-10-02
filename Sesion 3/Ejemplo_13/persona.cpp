#include "Persona.hpp"

Persona::Persona(int edad)
{
    // El DNI y el género se establecen de forma automática.
    this->edad = edad;
}

void persona::mostrar() { cout << "La persona tiene " << this->edad << endl; }

Persona::~Persona() {}