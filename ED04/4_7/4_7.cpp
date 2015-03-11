#include <iostream>
#include <locale.h>
using namespace std;
int main(){		
	int somaIdade = 0, idade, cont = 0;
	double media;
	setlocale(LC_ALL, "portuguese");

	cout << "Digite a idade:";
	cin >> idade;

	while (idade != 0){
		somaIdade = somaIdade + idade;
		cout << "Digite a idade: ";
		cin >> idade;
		cont = cont + 1;
	}
	
	media = somaIdade / cont;
	cout << "\n \nA média das idades digitadas é: " << media << "\n \n";
	return 0;
}
