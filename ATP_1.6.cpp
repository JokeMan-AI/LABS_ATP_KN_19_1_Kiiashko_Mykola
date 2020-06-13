
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
	int y, m, d;
	cout << "Введите количество дней: ";
	cin >> d;
	y = d / 365;
	m = (d % 365) / 30;
	d = (d % 365) % 30;
	cout << "Лет: " << y << " Месяцев: " << m << " Дней: " << d << endl;
	return 0;
}

