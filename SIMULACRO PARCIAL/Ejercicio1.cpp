// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int n;
	int i = 1;
	double a;
	double m = 0;

	//Restricciones
	// a>=1 && a<=6
	// n>0

	//Logica
	cout << "Ingrese cantidad de terminos (n): ";
	cin >> n;
	cout << "Ingrese un valor para a: ";
	cin >> a;

	if ((a < 1 && a > 6) || n <= 0) {
		cout << "ERROR. Ingrese valores validos.";
	}
	else {
		while (i <= n) {
			if (i == 1) {
				m = 1.0 / a;
				i++;
				continue;
			}
			m = m + (1.0 / ((pow(2.0, i))*a));
			i++;
		}

		cout << "la sumatoria de los terminos de la serie es: " << m << endl;
	}

	system("pause");
	return 0;
}

