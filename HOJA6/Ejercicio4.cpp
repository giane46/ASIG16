// ConsoleApplication96.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	char tipoEmergencia;
	int hora;
	char origen;

	int sumEco = 0;
	int sumSan = 0;
	int sumRad = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumNat = 0;
	int sumInt = 0;

	//Logica
	while (1) {
		cout << "Ingrese el tipo de emergencia ((E: Ecológica; S: Sanitaria; R: Radioactiva): ";
		cin >> tipoEmergencia;

		if (tipoEmergencia == 'F') {
			break;
		}

		switch (tipoEmergencia) {
		case 'E': sumEco++;
			break;
		case 'S': sumSan++;
			break;
		case 'R': sumRad++;
			break;
		default: cout << "ERROR. Ingrese un tipo de emergencia valido." << endl;
			break;
		}

		cout << "Ingrese la hora de la emergencia: ";
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
					if (hora >= 18 && hora <= 23) {
						sumNoc++;
					}
					else {
						cout << "ERROR. Ingrese una hora valida." << endl;
					}
				}
			}
		}			

		cout << "Ingrese el origen de la emergencia (N: Naturaleza; I: Intervención del hombre): ";
		cin >> origen;
		switch (origen) {
		case 'N': sumNat++;
			break;
		case 'I': sumInt++;
			break;
		default: cout << "ERROR. Ingrese un origen valido." << endl;
		}
	}

	//Salida
	cout << endl;
	cout << endl;

	cout << "Emergencia ecologica: " << sumEco << endl;
	cout << "Emergencia sanitaria: " << sumSan << endl;
	cout << "Emergencia radioactiva: " << sumRad << endl;

	cout << endl;

	if (sumMad > sumMan && sumMad > sumTar && sumMad > sumNoc) {
		cout << "En la MADRUGADA se produjeron mas emergencias." << endl;
	}
	else {
		if (sumMan > sumMad && sumMan > sumTar && sumMan > sumNoc) {
			cout << "En la MANIANA se produjeron mas emergencias." << endl;
		}
		else {
			if (sumTar > sumMad && sumTar > sumMan && sumTar > sumNoc) {
				cout << "En la TARDE se produjeron mas emergencias." << endl;
			}
			else {
				if (sumNoc > sumMad && sumNoc > sumMan && sumNoc > sumTar) {
					cout << "En la NOCHE se produjeron mas emergencias." << endl;
				}
			}
		}
	}
	
	cout << endl;

	if (sumNat > sumInt) {
		cout << "Predominan las emergencias NATURALES." << endl;
	}
	else {
		cout << "Predominan las emergencias POR INTERVENCION DEL HOMBRE." << endl;
	}

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
