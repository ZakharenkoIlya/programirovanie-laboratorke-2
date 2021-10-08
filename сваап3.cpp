
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d,l;
    cin >> a >> b >> c >> d;
    cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
    l = a;
    a = b;
    b = c;
    c = d;
    d = l;
    cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
    system("pause");
}
