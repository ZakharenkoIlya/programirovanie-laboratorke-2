#include "windows.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char Name[20];
	int a;
    cout << "Где вы учитесь?" << endl;
	char stroka[40];
	cin.getline(stroka, 40);
	cout << "Как вас зовут?" << endl;
	cin >> Name;
	cout << "Сколько вам лет?" << endl;
	cin >> a;
	cout << "Здраствуйте " << Name << " !У вас очень красивое имя." << endl;
	cout << "А по вам и не скажиш что вам " << a << " лет." << endl;
	cout<< "Я думаю что вы заслужено поступили в " << stroka << " ,а теперь простите но мне пора. До свидание!\n\n" << endl;
	system("pause");
}

