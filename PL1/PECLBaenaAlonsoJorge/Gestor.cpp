#include "Gestor.hpp"
#include "Aficionados.hpp"
#include <iostream>
using namespace std;

Gestor::Gestor() { ronda = 0; }

void Gestor::genera10Aficionados() {
  int n = 10;
  int a[n];
  cout << "Id ordenadas: " << endl;
  for (int i = 0; i < n; i++) {
    a[i] = i + 10 * ronda;
    Aficionado *aficionado = new Aficionado(a[i]);
    pilaAficionado.insertar(aficionado);
    cout << a[i] << " ";
  }
  ronda++;
}

void Gestor::muestraAficionados() { pilaAficionado.mostrar(); }

void Gestor::borraAficionadosPila() {
  cout << "Borrando todos los aficionados de la pila..." << endl;

  while (pilaAficionado.getLongitud() > 0) {
    Aficionado *af =
        pilaAficionado.extraer(); // extrae el nodo y devuelve el aficionado
    delete af;                    // libera la memoria del aficionado
  }

  cout << "Pila vaciada correctamente." << endl;
}
void Gestor::encolarAficionados() {
  if (pilaAficionado.getLongitud() == 0) {
    cout << "No hay aficionados en la pila para encolar." << endl;
    return;
  }

  cout << "Encolando aficionados..." << endl;

  while (pilaAficionado.getLongitud() > 0) {
    Aficionado *af = pilaAficionado.extraer(); // Sacamos de la pila

    if (af->getEsSocio()) {
      colaSocios.insertar(af);
      cout << "Aficionado ID:" << af->getId() << " (SOCIO) encolado." << endl;
    } else {
      colaSimpatizantes.insertar(af);
      cout << "Aficionado ID:" << af->getId() << " (SIMPATIZANTE) encolado."
           << endl;
    }
  }

  cout << "Todos los aficionados fueron encolados correctamente." << endl;
}
void Gestor::muestraSociosCola(){ colaSocios.mostrar(); }

void Gestor::muestraSimpatizantesCola(){ colaSimpatizantes.mostrar(); }

void Gestor::borraAficionadosColas(){
	cout << "Todos los aficionados fueron eliminados de sus colas correctamente." << endl;
	colaSocios.eliminar();
	colaSimpatizantes.eliminar();
}

Gestor::~Gestor() {}