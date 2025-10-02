#include "NodoCola.hpp"
class Colas
{
public:
	Colas();
	~Colas();

	void insertar(int v);
	int elimianr();
	void mostrar();
	int verPrimero();
	
private:
	pnodoCola primero, ultimo;
	int longitud;
};
