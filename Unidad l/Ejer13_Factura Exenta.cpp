#include <iostream>


using namespace std;
int main(int argc, char** argv) {
	
	// Datos de entrada
	
	double subtotal=0, total=0, impuesto=0, calculo_Descuento=0, calculo_Impuesto=0;
	int descuento=0;
	char esta_Exenta;
	
	cout << "Ingrese el subtotal de la factura: ";
	cin >> subtotal;
	
	cout << "\nIngrese el descuento (0, 10, 15, 20): ";
	cin >> descuento;
	
	cout<<"\nFactura Exenta? S/N"<<endl;
    cin>>esta_Exenta;
	
	//Proceso
	if(esta_Exenta == 'S' || esta_Exenta == 's')
  {
    calculo_Descuento= (subtotal*descuento)/ 100;
	total=subtotal;
  }
	else 
	{
	calculo_Descuento= (subtotal* descuento)/ 100;
	calculo_Impuesto=(subtotal-calculo_Descuento)* 0.15;
	total= subtotal-calculo_Descuento + calculo_Impuesto;
	}
	
	
	// Salida
	
	cout<< "\nTotal a pagar es: " << total<< endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
