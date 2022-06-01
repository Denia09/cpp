#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
	

	int a=0;
	int b=0;
	float suma=0;
	float resta=0;
	float multiplicacion=0;
	float division=0;
	
	cout << "Introduzca el valor de a " ;
	cin >> a;
	
	cout<< "\nIntroduzca el valor de b "; 
	cin >> b;
	
	
	suma= a+b;
	resta= a-b;
	multiplicacion= a*b;
	division= a/b;
	
	
	cout<< "\nLa suma de a y b es: " << suma << endl;
	cout<< "La resta de a y b es: " << resta << endl;
	cout<< "La multiplicacion de a y b es: " << multiplicacion<< endl;
	cout<< "La division de a y b es: " << division << endl;
	
	
	return 0;
}
