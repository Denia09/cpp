#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
	
        //Datos de entrada
	int a=0;
	int b=0;
	int  suma=0;
	int  resta=0;
	int  multiplicacion=0;
	int division=0;
	
	cout << "Introduzca el valor de a " ;
	cin >> a;
	
	cout<< "\nIntroduzca el valor de b "; 
	cin >> b;
	
	//Proceso
	suma= a+b;
	resta= a-b;
	multiplicacion= a*b;
	division= a/b;
	
	//Salida
	cout<< "\nLa suma de a y b es: " << suma << endl;
	cout<< "La resta de a y b es: " << resta << endl;
	cout<< "La multiplicacion de a y b es: " << multiplicacion<< endl;
	cout<< "La division de a y b es: " << division << endl;
	
	
	return 0;
}