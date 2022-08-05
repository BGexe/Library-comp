#include <iostream>
#include <cstdlib>
#include "include/ftrig"

int main()
{
	using std::cout, std::cin, std::endl;
	float x;
	cout << "Ingrese el valor del cual desea saber su funcion trigonometrica \n";
	cin >> x;
	float a = ftrig::seno(x);
	float b = ftrig::coseno(x);
	float c = ftrig::tangente(x);
	float d = ftrig::secante(x);
	float e = ftrig::cosecante(x);
	float f = ftrig::cotangente(x);
	cout << "seno(a) = " << a << endl;
	cout << "coseno(b) = " << b << endl;
	cout << "tangente(c) = " << c << endl;
	cout << "secante(d) = " << d << endl;
	cout << "cosecante(e) = " << e << endl;
	cout << "cotangente(f) = " << f << endl;
	return 0;
}
