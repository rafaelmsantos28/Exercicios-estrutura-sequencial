#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float cato, cata, hip;
	cin >> cato >> cata;
	hip = sqrt(pow(cato, 2) + pow(cata, 2));
	cout << "Sua hip eh: " << hip;
	return 0;
	
}
