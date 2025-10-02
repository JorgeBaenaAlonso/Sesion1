#include <iostream>
using namespace std;

class NodoCola
{
public:
	NodoCola(int v, NodoColpa* sig = NULL);
	~NodoCola();

private:
	int valor;
	NodoCola* siguiente;
	
	friend class Cola;
};

typedef NodoCola* pnodoCola;