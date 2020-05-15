
#include <iostream>
#include "Sala.h"

using namespace std;

int main()
{
	// 5. d)
	Sala sala1("sala1",12,8,true);
	Sala sala2("sala2", 20, 18, false);
	Sala sala3("sala3", 15, 12, true);
	// 5. e)
	sala1.mostrarDatos();
	sala2.mostrarDatos();
	sala3.mostrarDatos();
	// 5. f)
	int eventos[4] = {50,100,150,200};
	Sala s[] = { sala1,sala2,sala3 };
	//recorremos todo el arreglo buscando si se puede para cada cantidad
	for (int i = 0;i < 4;i++)
		for (int j = 0;j < 3;j++)
			if (s[j].hallarCapacidad() >= eventos[i])
				cout << "\nLa sala: " << s[j].getNombre() << " tiene capacidad para: "
				<<eventos[i]<<"personas\n\n";
	return 0;
}
