#include <iostream>
#include <cstdlib>
#include "functions.hpp"
#include "Point.hpp"

using namespace std;

int main() 
{
	int t = 0;
	double a, b, c, d, e, f;

	cout << "Ile sprawdzen wykonac?: "; cin >> t;
	for (int i = 0; i < t; i++)
	{
		cout << endl << "Podaj wspolrzedne 6 punktow: "; cin >> a >> b >> c >> d >> e >> f;
		Point A(a, b);
		Point B(c, d);
		Point C(e, f);
		if (check_unilin(A, B, C)) cout << "TAK" << endl;
		else cout << "NIE" << endl;
	}
	return 0;
}