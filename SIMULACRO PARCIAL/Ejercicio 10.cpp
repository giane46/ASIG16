// ConsoleApplication102.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int n;
	
	//Logica
	cout << "Ingrese n: ";
	cin >> n;
	while (n >= 11 || n <= 0) {
		cout << "Ingrese n: ";
		cin >> n;
	}
	
	//Parte superior del triángulo
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}
	//Parte Inferior Triángulo
	for (int j = n - 2; j >= 0; --j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}
	//Salida
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
