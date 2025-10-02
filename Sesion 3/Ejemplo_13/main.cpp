#include <iostream>
#include <vector>
#include "persona.hpp"

using namespace std;

int main() {
	Persona personas[10] = {
		personas.push_back(Persona("Ana", 18, 'F'));
		personas.push_back(Persona("Luis", 19, 'M'));
		personas.push_back(Persona("Maria", 20, 'F'));
		personas.push_back(Persona("Carlos", 21, 'M'));
		personas.push_back(Persona("Elena", 22, 'F'));
		personas.push_back(Persona("Javier", 23, 'M'));
		personas.push_back(Persona("Lucia", 24, 'F'));
		personas.push_back(Persona("Miguel", 25, 'M'));
		personas.push_back(Persona("Sofia", 26, 'F'));
		personas.push_back(Persona("Andres", 27, 'M'));
	};

	for (int i = 0; i < 10; i++) {
		personas[i].mostrar();
	}
    return 0;
}
