


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
		cout<<"Ingrese una nota entre 0 - 100";
		return 0;
	}
	if (nota >= 96 && nota <= 100)
	{
		cout<<"\nObtuviste una A++";
	}
	if (nota >= 91 && nota <= 95)
	{
		cout<<"\nObtuviste una AD";
	}
	if (nota >= 86 && nota <= 90)
	{
		cout<<"\nObtuviste una A";
	}
	if (nota >= 81 && nota <= 85)
	{
		cout<<"\nObtuviste una A-";
	}
	if (nota >= 76 && nota <= 80)
	{
		cout<<"\nObtuviste una B+";
	}
	if (nota >= 71 && nota <= 75)
	{
		cout<<"\nObtuviste una B";
	}
	if (nota >= 66 && nota <= 70)
	{
		cout<<"\nObtuviste una B-";
	}
	if (nota >= 61 && nota <= 65)
	{
		cout<<"\nObtuviste una C+";
	}
	if (nota >= 56 && nota <= 60)
	{
		cout<<"\nObtuviste una C";
	}
	if (nota >= 51 && nota <= 55)
	{
		cout<<"\nObtuviste una C-";
	}
	if (nota >= 46 && nota <= 50)
	{
		cout<<"\nObtuviste una D+";
	}
	if (nota >= 41 && nota <= 45)
	{
		cout<<"\nObtuviste una D";
	}
	if (nota >= 36 && nota <= 40)
	{
		cout<<"\nObtuviste una D-";
	}
	if (nota >= 31 && nota <= 35)
	{
		cout<<"\nObtuviste una E+";
	}
	if (nota >= 26 && nota <= 30)
	{
		cout<<"\nObtuviste una E";
	}
	if (nota >= 21 && nota <= 25)
	{
		cout<<"\nObtuviste una E-";
	}
	if (nota >= 16 && nota <= 20)
	{
		cout<<"\nObtuviste una F+";
	}
	if (nota >= 11 && nota <= 15)
	{
		cout<<"\nObtuviste una F";
	}
	if (nota >= 6 && nota <= 10)
	{
		cout<<"\nObtuviste una F es necesario más trabajo";
	}
	if (nota >= 1 && nota <= 5)
	{
		cout<<"\nObtuviste una F-";
	}
	if (nota == 0)
	{
		cout<<"\nObtuviste una F--";
	}
	return 0;
	
}


