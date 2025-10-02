#include <Pila.hpp>

int main(int argc, char** argv)
{
	Pila pila;
	
	pila.insetar(1);
	pila.insetar(2);
	pila.insetar(3);
	pila.insetar(4);
	pila.mostrar();
	
	int cima = pila.cima();
	pila.extraer();
	cout << "\tDespues de extraer la cima (" << cima << ")..." << endl;
	pila.mostrar();
	
	pila.insertar(5);
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();

	return 0;
}