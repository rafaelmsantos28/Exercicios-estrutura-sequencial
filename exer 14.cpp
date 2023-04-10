#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, f, g;
	cin >> a >> b;
	c = b - a;
	d = c * 12;
	e = d * 30;
	f = e /7;
	printf ("Voce tem %.0d anos ou %.0d meses ou %.0d dias ou %.0d semanas", c, d, e, f);
	return 0;
}
