// ConsoleApplication95.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int N;
	double suma = 0;
	double i = 1;
	double d = 2;
	double a, b;

	//Logica
	cout << "Ingrese el valor de N: ";
	cin >> N;
	while (N <= 0) {
		cout << "Ingrese el valor de N: ";
		cin >> N;
	}
	cout << "Ingrese el valor de a: ";
	cin >> a;
	while (a < 1 || a > 5) {
		cout << "Ingrese el valor de a: ";
		cin >> a;
	}
	cout << "Ingrese el valor de b: ";
	cin >> b;

	do {
		suma = suma + (pow(a, b) / d);

		b = b + b;
		d = d * 2;
		
		i++;
	} while (i <= N);

	//Salida
	cout << "Resultado: " << suma << endl;

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
