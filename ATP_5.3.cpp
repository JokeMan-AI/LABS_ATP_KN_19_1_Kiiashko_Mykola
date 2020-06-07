#include <iostream>
using namespace std;

int main()
{
    int i, n, x, y, a[20];
	setlocale(LC_ALL, "ru");
    cout << "Задайте кол-во элементов массива: ";
    cin >> n;
	cout << "Введите через пробел элементы массива в виде целых чисел: " << endl;
    for (i = 0; i < n; i++) cin >> a[i];
	x = 2147483647;
	y = -2147483648; 
	for (i = 0; i < n; i++) 
	{
		if (x > a[i]) x = a[i];
		if (y < a[i]) y = a[i];
  	}
	cout << "Наименьшее значение элемента массива " << x << endl;
	cout << "Наибольшее значение элемента массива: " << y << endl;
    return 0;
}

