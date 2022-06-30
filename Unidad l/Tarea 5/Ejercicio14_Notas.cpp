

#include <iostream>


using namespace std;

int main()
{
	//Datos Entrada
	int nota = 0;
	
	cout<<"Ingrese la nota que obtuvo: ";
	cin>> nota;
	
	
	if(nota > 100 || nota < 0)
	{
		cout<<"Ingrese una nota entre 0 - 200";
		return 0;
	}
	
	if (nota >= 95 && nota <= 100)
	{
		cout<<"\nObtuviste una A";
	}
	if (nota >= 85 && nota <= 94)
	{
		cout<<"\nObtuviste una B";
	}
	if (nota >= 75 && nota <= 84)
	{
		cout<<"\nObtuviste una C";
	}
	if (nota >= 65 && nota <= 74)
	{
		cout<<"\nObtuviste una D";
	}
	if (nota >= 60 && nota <= 64)
	{
		cout<<"\nObtuviste una E";
	}
	if (nota < 60)
	{
		cout<<"\nObtuviste una F";
	}

	return 0;
	
}
