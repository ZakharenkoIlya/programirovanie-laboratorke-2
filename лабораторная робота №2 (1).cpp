#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char MyName[20];
	cout << "Как тебя зовут?\n";
	cin >> MyName;
	cout << "Привет, " << MyName << "!" <<std::endl;
	system("PAUSE");
}