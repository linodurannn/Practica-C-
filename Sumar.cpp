#include <iostream>
#include <random>
#include <limits>//para std:: numeric_limits

using namespace std;

//declaracion de funciones
int suma(int num1, int num2) {
	return num1 + num2;
}

int main() {
	int num1, num2;
	
	// Solicitar que ingrese el primer numero
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	
	// Solicitar que ingrese el segundo numero
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	
	// Calcular la suma utilizando la funcion suma
	int resultado = suma(num1, num2);
	
	// Mostrar el resultado de la suma
	cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << endl;
	
	return 0;
}
