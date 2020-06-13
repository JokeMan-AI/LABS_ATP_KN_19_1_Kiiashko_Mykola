
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int far;
    cout << "Введите значение температуры в фаренгейтах\n";
    cin >> far;
    int cels;
    cels = (far - 32) * 5 / 9;
    cout << "Tемпература в цельсиях:" << cels;
    return 0;
}

