
#include <iostream>
using namespace std;

int main()
{
	int a, b, c,l;
	cin >> a >> b >> c;
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
	l = a;
	a = b;
	b = c;
	c = l;
	cout << "a=" << a << " b=" <<b << " c=" << c << endl;
	system("pause");
}

