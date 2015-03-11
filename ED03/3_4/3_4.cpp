/* 
 * File:   3_4.cpp
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
	int num;
	std::setlocale(LC_ALL, "portuguese");
	
	std::cout << "Número: ";
	std::cin >> num;		

	if (num % 2 == 0){
		std::cout << "\nNúmero par! \n \n";
	}else{
		std::cout << "\nNúmero ímpar! \n \n";
	}

	return 0;
}
