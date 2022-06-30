


#include <iostream>
using namespace std;
int main()
{
	//Datos de entrada
	double subtotal = 0, total = 0, impuesto = 0.15;
	
	cout<<"Ingrese el subtotal de la factura: ";
	cin>>subtotal;
	
	
	//proceso
	total = subtotal + (subtotal * impuesto);
	
	
	//salida
	cout<<"\nTotal a pagar es: "<<total;
	
	return 0;
}
