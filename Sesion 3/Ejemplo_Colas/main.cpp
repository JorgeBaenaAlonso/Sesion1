#include <Colas.hpp>

int main(int argc, char **argv)
{
	Colas colas;
	
	colas.insetar(1);
	colas.insetar(2);
	colas.insetar(3);
	colas.insetar(4);
	colas.mostrar();
	
	int primero = colas.verPrimero();
	colas.eliminar();
	cout << "\tDespues de extraer el primer (" << primero << ")..." << endl;
	colas.mostrar();
	
	colas.eliminar();
	colas.mostrar();
	colas.insertar(5);
	colas.mostrar();
	colas.eliminar();
	colas.mostrar();
	colas.eliminar();
	colas.mostrar();
	colas.eliminar();
	colas.mostrar();
	colas.eliminar();
	colas.mostrar();

	return 0;
}
