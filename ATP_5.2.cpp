#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int i, n, a[20];
    cout << "Задайте кол-во элементов массива: ";
    cin >> n;
	cout << "Введите через пробел элементы массива в виде целых чисел: " << endl;
    for (i = 0; i < n; i++) cin >> a[i]; 
    for (i = 0; i < n / 2; i++) swap(a[i], a[n-i-1]); 
    cout << endl;
    for (i = 0; i < n; i++) cout << a[i] << " "; 
    cout << endl;
    return 0;
}
