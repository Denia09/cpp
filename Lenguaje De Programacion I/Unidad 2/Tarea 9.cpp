#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int d1 = 0, d2 = 0, continuar = 1;


int main()
{

	while(continuar == 1)
	{
	cout << "BIENVENIDO" <<endl;
	cout <<endl;
	system("color 05");
    srand (time (NULL));
    d1=rand()%(6)+1;
    d2=rand()%(6)+1; 
    cout << "Dado 1: " << d1 <<endl;
    cout << "Dado 2: " << d2 <<endl;
    cout <<endl;
    cout << "Desea lanzar los dados otra vez?";
    cout<<"\n1) Volver a lanzar los dados"<<endl;
    cout<<"0) Salir del juego"<<endl;
    cout<<"Opcion : ";
    cin >> continuar;
    
    system("cls");
	}
	system("color 04");
	cout<<"Saliste del juego";

	return 0;
}

