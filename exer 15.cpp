#include <iostream>
using namespace std;

int main(){
	int sal, ca, cb, caa, cbb, res;
	cin >> sal >> ca >> cb;
	caa = ca * 1.02;
	cbb = cb * 1.02;
	res = sal - caa - cbb;
	cout << "Resto do salário: " << res;
	return 0;
}
