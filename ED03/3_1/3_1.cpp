/* 
 * File:   3_1.cpp
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
		double n1, n2;
		std::setlocale(LC_ALL, "portuguese");
		std::cout << "Primeiro número: ";
		std::cin >> n1;		

		std::cout << "Segundo número: ";
		std::cin >> n2;

		if(n1 > n2){
			std::cout << "\nPrimeiro número é maior! \n";
		}else{
			std::cout << "\nSegundo número é maior! \n";			
		}    
 return 0;
}
