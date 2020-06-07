#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru")
	float a, b, c, d, x1, x2;
	cout << "Введите a b c чтобы найти корни уровнения ";
	cin >> a;
	cin >> b;
	cin >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		cout << "Уровнение не имеет корней" << endl;
		return 1;
	}
	cout << "Дискриминант: " << d << endl;
	if (d == 0)
	{
		x1 = -b / (2 * a);
		cout << "Один корень: " << x1;
	}
	else
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << "Первый корень: " << x1 << endl;
		cout << "Второй корень: " << x2 << endl;
	}
	return 0;
}
