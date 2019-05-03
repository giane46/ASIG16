// ConsoleApplication105.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int k = 1;
	float a, b, n, pot, pot2, pot3;
	int fac = 1;
	float res, resu, suma = 0;

	cout << "ingresar a: ";
	cin >> a;
	while (a < 4 || a > 6) {
		cout << "ingresar a: ";
		cin >> a;
	}

	cout << "ingresar b: ";
	cin >> b;
	while (b < 1 || b > 3) {
		cout << "ingresar b: ";
		cin >> b;
	}

	cout << "ingresar n: ";
	cin >> n;
	while (n < 1 || n > 10) {
		cout << "ingresar n: ";
		cin >> n;
	}
	
	for (k; k <= n; k++) {
		//factorial
		fac = fac * k;
		//resta
		res = a - b;
		//potencias
		pot = pow(a, k);
		pot2 = pow(b, k + 1);
		pot3 = pow(-1, k + 1);
		//resultado por separado
		resu = pot3 * ((pot*pot2) / (res * fac));
		//suma de los resultados
		suma = suma + resu;
		//cout <<pot3<<"*  "<< pot<<""<<pot2<<"/"<< res << "" << fac<<"  ";
	}

	cout << "Suma: " << suma << endl;

	system("pause");
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
