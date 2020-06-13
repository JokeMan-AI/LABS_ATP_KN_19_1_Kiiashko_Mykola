

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a; int b; int c;
    cout << "Введите градусное значение 3-х углов\n";
    cin >> a; cin >> b; cin >> c;
    if (a+ b+ c == 180)
        cout << "Треугольник действительный";
    else
        cout << "Треугольник недействительный";
}



