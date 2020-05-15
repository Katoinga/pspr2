#include <iostream>
#include "Train.h"
//recorre todos los asientos y multiplica el precio de cada uno para sumarlos
int Train::totalVentas() {
	int acum = 0;
	for (int i = 0; i < numPri + numSeg; i++)
		if (carriages[i].getPrimera())
			for (int j = 0; j < 40; j++)
				acum += carriages[i].getAsiento(j) * precioPrimera;
		else for (int j = 0; j < 40; j++)
			acum += carriages[i].getAsiento(j) * precioSegunda;
	return acum;
}
// llama a la funcion ocupar de carriage
void Train::llenar() {
	for (int i = 0; i < numPri + numSeg; i++) {
		carriages[i].ocupar();
	}
}