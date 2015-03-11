#include <iostream>
#include <locale.h>
using namespace std;
int main(){		
	int soma = 0, qt = 0, qt1 = 0, idade;
	double media, percent;
	setlocale(LC_ALL, "portuguese");

	cout << "Digite a idade:";
	cin >> idade;

	while (idade != 999){
		qt = qt + 1;
		soma = soma + idade;
	
		if (idade > 15 && idade < 35) {
			qt1 = qt1 + 1;
		}

		cout << "Digite a idade: ";
		cin >> idade;
	}
	
	media = soma / qt;
	percent = (qt1 * 100) / qt; 
	cout << "\nA quantidade das idades digitadas é: " << qt << "\n";
	cout << "\nA média das idades é: " << media << "\n";
	cout << "\nA quantidade de pessoas com idade entre 15 e 35 é: " << qt1 << "\n";
	cout << "\nA porcentagem de pessoas com idade entre 15 e 35 é: " << percent << "%\n";
	return 0;
}
