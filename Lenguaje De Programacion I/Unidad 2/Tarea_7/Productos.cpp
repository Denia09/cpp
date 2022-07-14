#include <iostream>
#include "factura.h"
using namespace std;

void productos(int opcion)
{	system ("cls");
	int opcionProducto = 0;
	
	switch (opcion)
	{
		case 1:
			{
				cout<<"BEBIDAS CALIENTES"<<endl;
				cout<<" "<<endl;
				cout<<"1. Capuccino"<<endl;
				cout<<"2. Expresso"<<endl;
				cout<<"3. Americano"<<endl;
				cout<<endl;
				
				cout<<"\nIngrese su Opcion:  ";
				
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto(". Capuccino - Lps 40.00",1,40);	
						break;
					}
					case 2:
					{	
						agregarProducto("1. Expresso - Lps 30.00",1,30);	
						break;
					}
					case 3:
						agregarProducto ("1. Americano - Lps 24.00",1,24);
						break;
					default:
					{
						cout<<"\nOpcion no valida";
						break;
						return;
					}
					break;
				}
				cout<<"\nPRODUCTO AGREGADO"<<endl;
				system("pause");
				break;
			}
		case 2:
			{
				cout<<"BEBIDAS FRIAS"<<endl;
				cout<<"1. Granita de Cafe"<<endl;
				cout<<"2. Limonada"<<endl;
				cout<<"3. Te Frio"<<endl;
				
				cout<<"\nIngrese su Opcion:  ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1. Granita de cafe - Lps 35.00",1,35);	
						break;
					}
					case 2:
					{	
						agregarProducto("1. Limonada - Lps 25.00 ",1,25);	
						break;
					}
					case 3:
					{
						agregarProducto("1. Te Frio - Lps 20.00",1,20);
						break;
					}
					default:
					{
						cout<<"Opcion no valida";
						return ;
						break;
					}
					cout<<"\nPRODUCTO AGREGADO"<<endl;
					system("pause");
					break;
				}
				break;
			}
		case 3:
			{
				cout<<"REPOSTERIA"<<endl;
				cout<<"1. Pastel de chocolate"<<endl;
				cout<<"2. CheeseCake"<<endl;
				cout<<"3. Pastel de Coco"<<endl;
				
				cout<<"\nIngrese su Opcion:  ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1. Pastel de chocolate - Lps 200.00",1,200);	
						break;
					}
					case 2:
					{	
						agregarProducto("1. CheeseCake - Lps 150.00 ",1,150);	
						break;
					}
					case 3:
					{
						agregarProducto("1. Pastel de Coco - Lps 100.00",1,100);
						break;
					}
					default:
					{
						cout<<"Opcion no valida";
						return ;
						break;
					}
					cout<<"\nPRODUCTO AGREGADO"<<endl;
					system("pause");
					break;
				}
				system("pause");
				break;
			}		
	}
}
