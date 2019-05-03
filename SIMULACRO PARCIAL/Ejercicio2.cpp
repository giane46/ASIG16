// ConsoleApplication92.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	char lugar;
	int hora;
	char dispositivo;

	int sumA = 0;
	int sumB = 0;
	int sumC = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumCE = 0;
	int sumT = 0;
	int sumU = 0;

	//Logica
	while (1) {
		cout << "Lugar de ingreso: ";
		cin >> lugar;
		if (lugar == 'G') {
			break;
		}

		switch (lugar) {
		case 'A':
			sumA++;
			break;
		case 'B':
			sumB++;
			break;
		case 'C':
			sumC++;
			break;
		default: cout << "ERROR. Ingrese un lugar valido." << endl;
			break;
		}

		cout << "Hora de ingreso: ";
		cin >> hora;
		if (hora >= 0 && hora <= 5) {
			sumMad++;
		}
		else {
			if (hora >= 6 && hora <= 12) {
				sumMan++;
			}
			else {
				if (hora >= 13 && hora <= 17) {
					sumTar++;
				}
				else {
					if (hora >= 18 && hora <= 23)
						sumNoc++;
					else {
						cout << "ERROR. Ingrese una hora dentro del rango 0-23." << endl;
					}
				}
			}
		}

		cout << "Tipo de dispositivo: ";
		cin >> dispositivo;
		switch (dispositivo) {
		case 'C':
			sumCE++;
			break;
		case 'T':
			sumT++;
			break;
		case 'U':
			sumU++;
			break;
		default: cout << "ERROR. Ingrese un tipo de dispositivo valido." << endl;
			break;
		}
	}

	//Salida
	cout << "LUGAR INGRESO: " << endl;
	cout << "Lima: " << sumA << endl;
	cout << "Otra region: " << sumB << endl;
	cout << "Otro pais: " << sumC << endl;
	cout << endl;


	cout << "Hora Ingreso " << endl;
	cout << "Madrugada " << sumMad << endl;
	cout << "Manana " << sumMan << endl;
	cout << "Tarde " << sumTar << endl;
	cout << "Noche " << sumNoc << endl;
	cout << endl;


	cout << "Tipo dispositivo " << endl;
	cout << "Celular " << sumCe << endl;
	cout << "Tablet " << sumTa << endl;
	cout << "Computador " << sumCo << endl;
	cout << endl;

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
