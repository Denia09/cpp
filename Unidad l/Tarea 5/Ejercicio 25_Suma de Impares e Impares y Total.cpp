#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int pares=0, impares=0, total=0;

	
	for (int i = 1; i <=10; i++)
	{
		if( i%2 == 0)
		{
			pares = pares + i;
		}
		else
		{
			impares = impares + i;
		}	
		cout<<i<<" ";
	}
	cout<<endl;
	total = pares + impares;
	cout<<"\nTotal pares: "<<pares;
	cout<<"\nTotal impares: "<<impares;
	cout<<"\nEl total es: "<<total;
	
	
	
	
	return 0;
}
