#include <iostream>
using namespace std;

int prime_numbers(int x, int y)
{
    int a, b, c, d, n = 0;
    for (a = x; a <= y; a++)
    {
        c = a / 2;
        d = 0;
        for (b = 2; b <= c; b++)
            if ((a % b) == 0)
            {
                d++;
                break;
            }
        if (d == 0)
        {
            cout << a << "\t";
            n++;
            if ((n > 0) && ((n % 10) == 0)) cout << "\n";
        }
    }
	return n;
}

int main()
{
	int x, y;
	setlocale(LC_ALL, "ru");
    cout << "\tПростые числа\n";
    cout << "Введите диапазон простых чисел X и Y: ";
    cin >> x >> y;
    cout << "\nКоличество: " << prime_numbers(x, y) << endl;
	return 0;
}
