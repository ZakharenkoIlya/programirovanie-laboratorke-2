using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "rus");
    int x,b,c;
    cout << "Загадайте число от 1 до 10:";
    cin >> x;
    cout << "Сколько будет " << x <<" * 10 + 3:";
    cin >> c;
    b = (c - 3) / 10;
    //(((x * 10) / 2 + x) / 3 + 4) / 2 - 2 = b;
    cout << "Ваше число это:" << b << endl;
}
