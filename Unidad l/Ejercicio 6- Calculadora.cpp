#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
	
        //Entradas
	int a=0;
	int b=0;
	int  suma=0;
	int  resta=0;
	int  multip=0;
	int div=0;
	
	cout << "Introduzca el valor de a " ;
	cin >> a;
	
	cout<< "\nIntroduzca el valor de b "; 
	cin >> b;
	
	//Proceso
	suma= a+b;
	resta= a-b;
	multip= a*b;
	div= a/b;
	
	//Salida
	cout<< "\nLa suma de a y b es: " << suma << endl;
	cout<< "La resta de a y b es: " << resta << endl;
	cout<< "La multiplicacion de a y b es: " << multip<< endl;
	cout<< "La division de a y b es: " << div << endl;
	
	
	return 0;
}
