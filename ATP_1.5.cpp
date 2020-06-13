

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int num;
    cout << "Введите число\n";
    cin >> num;
    if (num < 0)
        cout << "Отрицательное";
    if (num > 0)
        cout << "Положительное";
    return 0;
}

