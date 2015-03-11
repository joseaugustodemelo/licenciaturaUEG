/* 
 * File:   2.7.cpp
 * Author: joseaugustodemelo
 *
 * Created on 10 de Março de 2015, 18:18
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */

int main() {
		string nome;
		int fFev, fMar, fAbr, fMaio, fJun, totalF;
		double percF;		
		std::setlocale(LC_ALL, "portuguese");

    std::cout << "Nome do aluno: ";
    std::cin >> nome;

    std::cout << "\n \nInforme o número de faltas: \n";
    std::cout << "Fevereiro: ";
    std::cin >> fFev;

    std::cout << "Março: ";
    std::cin >> fMar;

    std::cout << "Abril: ";
    std::cin >> fAbr;

    std::cout << "Maio: ";
    std::cin >> fMaio;

    std::cout << "Junho: ";
    std::cin >> fJun;

		totalF = fFev + fMar + fAbr + fMaio + fJun;
		percF = (totalF * 100) / 60;

    std::cout << "\n \n" << nome <<  " você tem " << percF << " % de faltas. \n \n";   
 return 0;
}
