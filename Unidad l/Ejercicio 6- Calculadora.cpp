#include <iostream>


using namespace std;
int main(int argc, char** argv) {
	
	
 //Entradas
	int a=0, b=0, suma=0, resta=0, multip=0,div=0;
	
	
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
