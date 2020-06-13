#include <iostream>
#include <stdlib.h>
using namespace std;

int showChoice()
{	
	system("cls");
	cout << "Выберете меню вводом соответствующей цифры 1-4, и нажмите ENTER, для выполнения арифметической операции.";
	cout << "Потом введите 2 числа и нажмите ENTER.\nНиже будет результат вашего запроса.";
	cout << "Для возврата в главное меню нажмите любую клавишу.\n";
	cout << "1. Сложение.\n";
	cout << "2. Вычитание.\n";
	cout << "3. Умножение\n";
	cout << "4. Деление\n";
	cout << "5. Закрыть программу\n";
	return 0;
}

float add(float a, float b)
{
	return a + b;
}

float substruct(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a / b;
}

int main()
{
	int n = 0;
	float a, b;
	setlocale(LC_ALL, "ru");
	while (1)
		switch (n)
		{
			case 1:
				cout << add(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 2:
				cout << substruct(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 3:
				cout << multiply(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 4:
				cout << divide(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> n;
				if (n != 5) cin >> a >> b;
		}
}

