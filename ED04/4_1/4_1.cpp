#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	int i;
	setlocale(LC_ALL, "portuguese");
	for(i = 20; i <= 30; i+=2){
		cout << i << "\n";
	}
	return 0;
}
