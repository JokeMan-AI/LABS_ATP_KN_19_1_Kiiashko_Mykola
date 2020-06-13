#include <iostream>
using namespace std;
int main()
{   setlocale(LC_ALL, "ru")
    int n;
    int s = 0;
 
    cout << "Введите целое число для нахождения суммы цифр, n = ";
    cin >> n;
    while (n != 0)
    {
        s += n % 10; 
        n /= 10; 
    }
    cout << "Сумма: " << s << endl;
    return 0;
}
