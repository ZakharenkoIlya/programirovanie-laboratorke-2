#include "windows.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char stroka[50];
    cout << "Введите текст \n" ;
    cin.getline(stroka, 50);
    cout << "И как говорил один великий класик " << "''" << stroka << "''" << endl;
    system("PAUSE");
}
