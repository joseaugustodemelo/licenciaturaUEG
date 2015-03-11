#include <iostream>
#include <locale.h>
using namespace std;
int main(){		
	double pco, total = 0, pcoProd;
	int qtd;
	setlocale(LC_ALL, "portuguese");

	cout << "\n ----- Informações dos produtos vendidos ----- \n \n";
	cout << "Quantidade: ";
	cin >> qtd;

	cout << "Preço unitário: "; 
	cin >> pco;

	pcoProd = qtd * pcoProd;
	total = total + pcoProd;

	while (qtd != 0) {
		cout << "Quantidade: ";
		cin >> qtd;

		if (qtd != 0) {
			cout << "Preço unitário: ";
			cin >> pco;
			pcoProd = qtd * pco;
			total = total + pcoProd;
		}
	}

	cout << "\n \nO preço total da venda foi de: " << total << "\n \n";
	return 0;
}
