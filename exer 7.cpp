#include <iostream>
using namespace std;

int main(){
	float a, b, c;
	cin >> a;
	b = a * 1.15;
	c = a * 0.80;
	printf("Se engordar 15%: %.0f, se emagrecer 20%: %.0f",b,c);
	return 0;
}
