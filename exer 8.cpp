#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	cin >> a;
	b = a * 1000;
	printf("Esse é seu peso em gramas: %.0d gramas", b);
	return 0;
}
