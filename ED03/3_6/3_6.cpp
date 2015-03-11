/* 
 * File:   3_6.cpp
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
	string nome;
	double nota1, nota2, media1, media2, provaFinal;
	std::setlocale(LC_ALL, "portuguese");

	std::cout << "Nome: ";
	std::cin >> nome;
	std::cout << "1ª VA: ";
	std::cin >> nota1;

	std::cout << "2ª VA: ";
	std::cin >> nota2;

	media1 = (nota1 + nota2)/2;
	if (media1 <= 3){
		std::cout << "\nReprovado\n\n";		
	}else{
		if(media1 >= 7){
			std::cout << "\nAprovado\n\n";		
		}else{
			if(media1 > 3 && media1 < 7){
				std::cout << "\nProva Final\n\n";	
				std::cin >> provaFinal;
				media2 = (media1 + provaFinal) / 2;
				if(media2 > 5){
					std::cout << "\nAprovado\n\n";	
				}else{
					std::cout << "\nReprovado\n\n";		
				}
			}
		}
	}

	return 0;
}
