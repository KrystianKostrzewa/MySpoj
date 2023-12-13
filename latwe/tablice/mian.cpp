#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int* tab = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> tab[i];
		}
		for (int i = 0; i < n / 2; i++)
		{
			swap(tab[i], tab[n - i - 1]);
		}
		for (int i = 0; i < n; i++)
		{
			cout << tab[i] << " ";
		}
		cout << endl;
	}


	return 0;
}
