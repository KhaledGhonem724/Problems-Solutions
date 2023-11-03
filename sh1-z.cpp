/*
_/﹋\_
(҂`_´)
<,︻╦╤─* - - Khaled Ghonem
_/﹋\_
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long a, b, d, c;
	cin >> a >> b >> c >> d;
	double res1 = b * log(a);
	double res2 = d * log(c);
	if (res1 > res2) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
}
