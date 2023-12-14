#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int nwd(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int nww(int a, int b)
{
	return a * b / nwd(a, b);
}

int main()
{
	int t, n, nwwYet, temp;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cin >> nwwYet;
		for (int i = 1; i < n; i++)
		{
			cin >> temp;
			nwwYet = nww(nwwYet, temp);
		}
		cout << nwwYet << endl;
	}
	return 0;
}
