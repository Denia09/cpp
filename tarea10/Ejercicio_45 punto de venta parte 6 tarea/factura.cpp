#include <iostream>
using namespace std;

double subtotal;
float impsv = 15;
double total;
string listaProductos;
void agregarProducto(string descripcion,int cantidad,double precio)
{
	listaProductos = listaProductos + descripcion + "\n";
	subtotal = subtotal + (cantidad * precio);
	
}

void imprimirFactura()
{
	system ("cls");
	cout<<"FACTURA"<<endl;
	cout<<endl;
	
	cout<<"Productos: "<<endl;
	cout<<listaProductos;
	
	cout<<endl;
	impsv = impsv / 100;
	impsv = subtotal * impsv;
	total = subtotal + impsv;
	cout<<"Subtotal: "<<subtotal<<" Lps";
	cout<<endl;
	cout<<"Impuesto del 15%: "<<impsv<<" Lps"<<endl;
	cout<<endl;
	cout<<"TOTAL A PAGAR: "<<total<<" Lps"<<endl;
	system("pause");
}
