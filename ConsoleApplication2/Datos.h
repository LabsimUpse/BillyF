#pragma once
#include <iostream>
#include <string.h>
#include <array>


using namespace std;



class Datos
{
	private:
	// atributo privado
	int s;
	int t;
	int st [1][1];
	array < int, 1 > n;
	int st = suma;

public:
	Datos(void);

	Datos();

	int Cantidad();
    void setRanger(int a, int b, int suma);
	void setBilly ();
	int setBillyf();
	int getBilly();
	

	~Datos(void);
};

