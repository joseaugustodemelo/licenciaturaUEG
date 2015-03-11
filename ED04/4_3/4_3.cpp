#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	int i, somaImpar;
	somaImpar = 0;
	setlocale(LC_ALL, "portuguese");
	for(i = 0; i <= 70; i++){
		if(i % 2 != 0){
			somaImpar = somaImpar + i;	
		}		
	}
	cout << "A soma dos números ímpares contidos entre 0 e 70 é: " << somaImpar << "\n";
	return 0;
}
