/* 
 * File:   3_3.cpp
 * Author: joseaugustodemelo
 *
 * Created on 10 de Março de 2015, 20:18
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */

int main() {
	string nome1, nome2;
	std::setlocale(LC_ALL, "portuguese");
	
	std::cout << "Primeiro nome: ";
	std::cin >> nome1;		

	std::cout << "Segundo nome: ";
	std::cin >> nome2;

	if (nome1 == nome2){
		std::cout << "\nNomes iguais! \n";	
	}else{
		std::cout << "\nNomes difentes! \n";	
	}

	return 0;
}
