#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	int i;
	setlocale(LC_ALL, "portuguese");
	for(i = 0; i <= 100; i++){
		if(i % 5 == 0){
			cout << i << "\n";
		}		
	}
	return 0;
}
