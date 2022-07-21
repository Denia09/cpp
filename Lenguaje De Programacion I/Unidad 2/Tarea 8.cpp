#include <iostream>
#include <math.h>

using namespace std;

double Raiz(double num1) 
{
	return sqrt(num1);
}
int main()
{
	
	double numero = 0;
	cout<<"Ingrese un numero para saber su Raiz Cuadrada: ";
	cin>>numero;
	
	if(numero < 0)
	{
		cout<<" La raiz no existe";
	}
	else
	{
		cout<<"\nLa raiz de "<<numero<<" es  "<<Raiz(numero);
	}
	return 0;
}

