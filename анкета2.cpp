#include "windows.h";
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "RUS");
    char name[15];
    char secname[15];
    char fathname[15];
    char gender[10];
    int nomer;
    int curs;
    char hobbi[10];
    char a[10];
    cout << "Адрес:";
    char adres[20];
    cin.getline(adres, 20);
    cout << "Место учебы:";
    char place[20];
    cin.getline(place, 20);
    cout << "Имя:";
    cin >> name;
    cout << "Фамилия:";
    cin >> secname;
    cout << "Отчество:";
    cin >> fathname;
    cout << "Пол:";
    cin >> gender;
    cout << "Дата рождения:";
    cin >> a;
    cout << "Номер телефона:+380";
    cin >> nomer;
    cout << "Курс:";
    cin >> curs;
    cout << "Хобби:";
    cin >> hobbi;
    cout << "\n";
    cout << "\t\t\t\t\tАнкета\n";
    cout << "\t\tФамилия " << "\t\tИмя " << "\t\tОтчество " << endl;
    cout << "\t\t------- " << "\t\t--- " << "\t\t-------- " << endl;
    cout << "\t\t"<<secname << " \t\t " << name << " \t\t " << fathname << endl;
    cout << "\t\tПол" << "\t\tДата рождения" << "\t\tНомер телефона" << endl;
    cout << "\t\t--- " << "\t\t------------ " << "\t\t------------- " << endl;
    cout << "\t\t" << gender << "\t\t"<< a << "\t\t" << nomer << endl;
    cout << "\t\tАдрес " << endl;
    cout << "\t\t----- " << endl;
    cout << "\t\t"<< adres << endl;
    cout << "\t\tМесто учебы " << "\t\tКурс " << endl;
    cout << "\t\t----------- " << "\t\t---- "  << endl;
    cout << "\t\t"<< place << "\t "<< curs <<  endl;
    cout << "\t\tХобби " << endl;
    cout << "\t\t----- " <<  endl;
    cout << "\t\t" << hobbi << endl;
    system("pause");
}
