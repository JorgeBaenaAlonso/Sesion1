#include <iostream>
#include "Gestor.hpp"
#include "Aficionados.hpp"
using namespace std;

Gestor::Gestor()
{
	ronda = 0;
}

void Gestor::genera10Aficionados(){
	int n = 10;
	int a[n];
	cout << "Id ordenadas: " << endl;
	for(int i=0; i<n; i++){
		a[i] = i+10*ronda;
		Aficionado*aficionado = new Aficionado(a[i]);
		pilaAficionado.insertar(aficionado);
		cout << a[i] << " ";
	}
	ronda++;

}

void Gestor::muestraAficionados(){
	pilaAficionado.mostrar();
	}

Gestor::~Gestor()
{
}

