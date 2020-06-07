#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, b, c, d, e, f;
	cout << "Введите 5 оценок [0..100]: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	f = (a + b + c + d + e) / (float)5;
	cout << "Средний балл: " << f << endl;
	switch (f / 10)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			cout << "1. Процент выше 60 баллов - Первое деление";
			break;
		case 5:
			cout << "2. Процент между 50 и 59 баллами - Второе деление";
			break;
		case 4:
			cout << "3. Процент между 40 и 49 баллами - Третье деление";
			break;
		default:
			cout << "4. Процент ниже 40 баллов - Не сдал";
	}	
	return 0;
}
