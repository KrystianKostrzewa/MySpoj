#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int t, v1, v2;
	cin >> t;

	while (t--)
	{
		cin >> v1 >> v2;
		cout << (2 * v1 * v2) / (v1 + v2) << endl;
	}

	return 0;
}
