/*
    Proposito: Calcular Bono de un Trabajador

    Autor: Denia Maria Aguirre Ortiz
    Fecha: 19/03/22
    Hora:
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	setlocale (LC_CTYPE,"Spanish");
	cout << setprecision(10);

	cout << "Calculo del Bono" << endl;

	//Declarar Variables
	float salario=0, bono=0;
	int antiguedad=0;
	
	
	//Pedir al usuario la informacion
	
    cout <<" \nIntroduzca el salario Mensual: ";
	cin >> salario;
	cout <<" \nIntroduzca su Antiguedad: ";
	cin >> antiguedad;
	
	
	
	if (antiguedad < 2)
	{
      bono = salario*0.03;
	  cout << "\nSu bono seria de LPS " << bono;
	}
	else
	    if (antiguedad >= 2 && antiguedad <= 5 )
	    {
	      bono = salario*0.09;
	      cout << "\nSu bono seria de LPS " << bono;	
		}
		else
		    if (antiguedad > 5 )
		    {
		    	bono = salario*0.18;
	            cout << "\nSu bono seria de LPS " << bono;
			}
			else 
			 cout << "\n Dato invalido" ;
	

    return 0;
}

