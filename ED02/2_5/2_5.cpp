/* 
 * File:   2.5.cpp
 * Author: joseaugustodemelo
 *
 * Created on 10 de Março de 2015, 18:18
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int main() {
		double salBruto, salLiq;
		std::setlocale(LC_ALL, "portuguese");
		std::cout << "Informe o salário bruto: ";
		std::cin >> salBruto;

		salLiq = salBruto - (salBruto * 0.27);

    std::cout << "\n \nO valor do salário líquido com os devidos descontos é:  " << salLiq << ".\n \n";   
 return 0;
}
