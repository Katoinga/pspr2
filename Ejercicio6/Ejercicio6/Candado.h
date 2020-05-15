#pragma once
#include <iostream>
class Candado {
public:
	Candado(int[]);
	void alterarDigito(int i, int n);
	bool mismaCombActual(const Candado& c)const;
	bool puedeAbrir()const;
	~Candado(void);
private:
	int puesto[3];
	int actual[3];
};
