#include <iostream>
#include <locale.h>
using namespace std;
int main(){		
	double nota, media;
	int qtd, soma;

	qtd = 0;
	soma = 0;
	setlocale(LC_ALL, "portuguese");

	while (nota != -1) {
		cout << "Nota: ";
		cin >> nota;

		if (nota != -1) {
			qtd = qtd + 1;
			soma = soma + nota;
		}
	}

	cout << "\n \nA quantidade de notas válidas digitadas foi: " << qtd << "\n \n";	
	media = soma / qtd;
	cout << "\n \nA média das notas digitadas é: " << media << "\n \n";	
	return 0;
}
