/*
Titulo: Tabla de Multiplicar. 
Autor: Lino Ervin Duran Serrudo. 
Descripcion: Realizar un programa que muestre la tabla de multiplicar de un numero dado por el usuario. 
Fecha:2024 - 01 - 17
*/

// Incluimos la librería iostream que proporciona funciones de entrada/salida.
#include <iostream>

// Utilizamos el espacio de nombres std para evitar la repetición de std::
using namespace std;

// Función principal del programa.
int main() {
	// Declaración de variable para almacenar el número ingresado por el usuario.
	int numero;
	
	// Mensaje para solicitar al usuario que ingrese un número.
	cout << "Ejercicio 1: Tabla de Multiplicar\n";
	cout << "Ingrese el número para realizar la tabla: ";
	
	// Leer el número ingresado por el usuario desde la consola.
	cin >> numero;
	
	// Mostrar la tabla de multiplicar del número ingresado.
	cout << "Tabla de multiplicar del " << numero << ":\n";
	
	// Utilizar un bucle for para imprimir la tabla de multiplicar del número.
	for (int i = 1; i <= 10; ++i) {
		// Mostrar cada multiplicación en una línea.
		cout << numero << "x" << i << "=" << (numero * i) << "\n";
	}
	
	// Indicar que el programa se ejecutó correctamente.
	return 0;
}
