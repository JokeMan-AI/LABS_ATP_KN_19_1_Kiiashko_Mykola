#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
    int i, n, s, a[20];
	float v;
    cout << "Задайте кол-во элементов массива: ";
    cin >> n;
	cout << "Введите через пробел элементы массива в виде целых чисел: " << endl;
    for (i = 0; i < n; i++) cin >> a[i]; 
	s = 0; v = 0;
	for (i = 0; i < n; i++) s = s + a[i];
	if (n != 0) v = (float)s / n;
	cout << "Сумма элементов массива: " << s << endl;
	cout << "Среднее значение элементов массива: " << v << endl;
    return 0;
}
