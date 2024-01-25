#include <iostream>
using namespace std;
//Declaracion de variable globales. 
int n1,n2;
//Realizar una funcion para recibir un parametro y determinar si el parametro es par o impar
bool esPar(int num)
{
	return num%2==0;
}
int sumar()
{
	return n1+n2;
}

int multiplicar()
{
	return n1*n2;
}
void ingresar()
{
	cout<<"Ingresar el primer numero: ";
	cin>>n1;
	cout<<"Ingresar el segundo numero: ";
	cin>>n2;
}

int main(int argc, char *argv[]) {
	ingresar();
	cout<<"Suma de los numeros es: "<<sumar()<<endl;
	cout<<"Multiplicacion de los numeros es: "<<multiplicar()<<endl;
	if(esPar(n1))
		cout<<"Numero "<<n1<<" es PAR"<<endl;
	else
		cout<<"Numero "<<n1<<" es IMPAR"<<endl;
	if(esPar(n2))
		cout<<"Numero "<<n2<<" es PAR"<<endl;
	else
		cout<<"Numero "<<n2<<" es IMPAR"<<endl;
	return 0;
}
