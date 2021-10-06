
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
    swap(a, b);
    swap(b, c);
    swap(c, d);
    cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
    system("pause");
}
