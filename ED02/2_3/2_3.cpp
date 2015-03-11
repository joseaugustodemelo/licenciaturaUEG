/* 
 * File:   2.3.cpp
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
		double area;
		int tempo;
		std::setlocale(LC_ALL, "portuguese");

    std::cout << "Digite o tamanho da área a ser arada (em hectares): ";
    std::cin >> area;

		tempo = area / 2;

    std::cout << "\n \nSerão necessários " << tempo << " dias para arar a área informada.\n \n";   
 return 0;
}
