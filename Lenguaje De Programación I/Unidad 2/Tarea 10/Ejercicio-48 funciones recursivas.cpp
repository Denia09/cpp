#include <iostream>


using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
	if(miNumero == numeroSecreto)
	{
		cout << "Adivinaste!" <<endl;
	}
	else{
		cout << "Intento fallido con " <<miNumero <<endl;
		
		int otroNumero = 0;
		cout << "Ingrese otro numero: ";
		cin >> otroNumero;
		adivinarNumeroSecreto(7);
	}
}
int main(int argc, char** argv)
{
	adivinarNumeroSecreto(5);
	return 0;
}

