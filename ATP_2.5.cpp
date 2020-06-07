#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int s;
	cout << "Вычисление суммы первых десяти натуральных чисел с помощью арифметической прогрессии" << endl;
	s = (float)(2 * 0 + 1 * (10 - 1)) / 2 * 10;
	cout << "Сумма: " << s;	
	return 0;
}