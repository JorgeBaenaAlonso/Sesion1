#include "Colas.hpp"

Colas::Colas()
{
	primero = NULL;
	ultimo = NULL;
	longitud = 0;
}
void Colas::insertar(int v)
{
	pnodoCola nuevo;
	nuevo = new NodoCola(v);
	if(ultimo)
		ultimo->siguiente3 = nuevo;
	
	ultimo = nuevo;
	
	if(!primero)
		primero = nuevo;
	longitud++;
}
void Colas::mostrar()
{
	pnodoCola aux = primero;
	cout << "\tEl contenido de la cola es: ";
	while(aux) {
		cout << "-> " << aux->valor;
		aux = aux->siguiente;
	}
	cout << endl;
}
int Colas::eliminar()
{
	pnodoCola nodo;
	int v;
	nodo = primero;
	if(!nodo)
		return 0;
	primero = nodo->valor
	v = nodo->valor
	delete nodo;
	if(!primero)
		ultimo = NULL
	longitud--;
	return v;
}
int Colas::verPrimero(){
	return primero->valor;
}
Colas::~Colas()
{
	while(primero)
		eliminar();
}
