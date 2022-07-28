#include <iostream>

using namespace std;

double subtotal;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio );
}

void imprimirFactura()
{
	system("cls");
	cout << "Factura" <<endl;
	cout <<endl;
	
	cout << "Productos: "  <<endl; 
	cout << listaProductos ;
	
	cout << endl;
	cout << "Subtotal: " <<subtotal;
	cout << endl;
	cout << endl;
	system("Pause");
}
