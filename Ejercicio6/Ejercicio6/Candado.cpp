#include "Candado.h"
using namespace std;
Candado::Candado(int c[]) {
	for (int i = 0;i < 3;i++) {
		puesto[i] = c[i];
		actual[i] = 0;
	}
}
// cambia el digito en la pos[i] por n
//6.1)
void Candado::alterarDigito(int i, int n) {
	if ((i > 2 || i < 0) || (n>9 || n<0)) {
		cout << "Ingrese un indice valido(0,1,2)";
		cout << "Ingrese un digito valido(0-9)";

		return;
	}
	else {
		actual[i] = n;
	}
}
// retorna true si la combinacion act del objeto
// coincida con la combinacion act de otro
//6.3)
bool Candado::mismaCombActual(const Candado& c) const{
	for (int i = 0;i < 3;i++) {
		if (actual[i] != c.actual[i]) {
			return false;
		}
	}
	return true;
}
// comprueba que la cerradura pueda abrirse
// recorriendo el arreglo y comparando que sea 
// diferente.
//6.2)
bool Candado::puedeAbrir() const{
	for (int i = 0;i < 3;i++) {
		if (puesto[i] != actual[i]) {
			return false;
		}
	}
	return true;
}
Candado::~Candado() {}
