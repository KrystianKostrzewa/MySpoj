#include <iostream>

using namespace std;

int main()
{
	int d, n, x, dzies, jedn;
	cin >> d;

	for (int i = 0; i < d; i++)
	{
		cin >> n;
		if (n <= 1)
		{
			cout << "0 1" << endl;
		}
		else if (n < 10)
		{
			x = 1;
			for (int j = 2; j <= n; j++)
			{
				x = (x * j) % 100;
			}

			jedn = x % 10;
			dzies = (x / 10) % 10;

			cout << dzies << " " << jedn << endl;
		}
		else
		{
			dzies = 0; jedn = 0;
			cout << "0 0" << endl;
		}
	}

	return 0;
}
