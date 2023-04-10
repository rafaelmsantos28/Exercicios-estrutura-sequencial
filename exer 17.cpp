#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	float r, C, A, V;
	cin >> r;
	C = 2 * 3.14 * r;
	A = 3.14 * pow(r,2);
	V = 3.0/4 * 3.14 * pow(r,3);
	printf("Seu comprimento eh: %.2f, sua area eh: %0.2f e seu volume eh: %0.2f", C, A, V);
	return 0;
}
