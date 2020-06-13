#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{   setlocale(LC_ALL, "ru")
	int b;
	srand(time(NULL));
	int a = rand() % 100;
	cout << "Угадай число!" << endl;
        while(b != a)
{
		cin >> b;
        if(b > a)
            cout << "Больше" << endl; 
        else if(b < a)
            cout << "Меньше" << endl; 
        else if(b == a)
        	cout << "Вы угадали число!" << endl;        
}
 	  return 0;
}


