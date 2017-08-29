#include "Datos.h"
#include <iostream>
#include <string>


using namespace std;



Datos:: Datos ()
{

}


Datos::~Datos ()
{

}

void Datos:: setRanger(int a, int b, int suma)
{ 
	s = a;
	t = b;
	st = suma;
}

void Datos:: setBilly()
{

}


int Datos :: setBillyf()
{
	int Datos [30];
	int s,t,st = 0, n;

	cout <<"digite la magnitud del vector: ";
	cin >> n;
	 for (t = 1; t < n ; t++)
	 
	{
		cout <<"digite el numero de la posicion v["<< t <<"]: ";
	 cin >> s;

	 Datos[t]= s;
	 st = st + Datos[t];
    }

 cout << " El resultado de la suma de los elementos del vector es: " << st;
 system ("Pause");
 return 0;
}

 int Datos :: getBilly()

 {
	  int Datos [30][30];
	  int s,t,st = 0, n;

	  cout <<"digite la magnitud del: ";
	  cin >> n;

	  for (int a = 1; a <= n; a++)
	  {

		  for (int b = 1; b <= n; b++)
		  {

			  cout << "Digite el valor posicion ["<< a << "," << b << "]: ";
			  cin >> Datos [a][b];
		  }
	  }

	  for (s = 1; s <= n; s++)
	  {
			 st = 0;

			 for (t = 1; t <= n; t++)
			 {

				 st = st + Datos [s][t];

			 }

		 cout << " La suma de la fila  "  << s << "es : " << st;
		 cout << "\n";

      }
		 system("Pause");

		 return 0;
 
     
 }
  



