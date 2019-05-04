#include <iostream>

using namespace std;

int main() {
	//Entrada
	//Entrada
	int n;
	cout << " Ingrese un numero postivo menor a 11: ";
	cin >> n;

	//Test
	/*Numero positivo mayor a 11*/

	//Lógica
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}

	for (int j = n - 2; j >= 0; --j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}