// ConsoleApplication98.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	double a;
	double k;
	double resultado = 0;
	double i = 1;
	double num = 0;
	double den = 1;
	double fact = 1;
	double div = 0;

	//Logica
	cout << "Ingrese k: ";
	cin >> k;
	while (k > 20) {
		cout << "Ingrese k: ";
		cin >> k;
	}
	cout << "Ingrese a: ";
	cin >> a;

	do {
		num = pow(a, i); //NUMERADOR
		i++;

		den = den * fact; //DENOMINADOR
		fact++;

		div = num / den; //A PARTIR DE a

		resultado = resultado + div;

	} while (i <= k);

	cout << "El resultado es: " << resultado + 1 << endl; //EL 1 QUE SE SUMA A TODO LO DEMAS

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
