#include <iostream>
#include <math.h>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, b, c;
	float s, q;
	cout << "Введите стороны треугольника: ";
	cin >> a;
	cin >> b;
	cin >> c;
	s = ((float) a + b + c) / 2;
	q = sqrt ((float)s*(s-a)*(s-b)*(s-c));
	cout << "Площадь треугольника: " << q;
return 0;
}
