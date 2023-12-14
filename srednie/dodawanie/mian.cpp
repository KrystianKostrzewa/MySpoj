#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int t;
	string a, b;
	cin >> t;
	while (t--)
	{

		cin >> a >> b;
		int maxLen = max(a.length(), b.length()), dif = fabs(a.length() - b.length());
		vector<int> table;
		table.reserve(maxLen + 1);
		bool cont = true;

		while (dif != 0)
		{
			if (a.length() > b.length())
			{
				b = '0' + b;
				dif--;
			}
			if (b.length() > a.length())
			{
				a = '0' + a;
				dif--;
			}
		}
		for (int i = 0; i < maxLen; i++)
		{
			if (a.length() > i && b.length() > i)
			{
				table.push_back((static_cast<int>(a[i]) - 48) + (static_cast<int>(b[i]) - 48));
			}
			else if (a.length() > i)
			{
				table.push_back(static_cast<int>(a[i]) - 48);
			}
			else if (b.length() > i)
			{
				table.push_back(static_cast<int>(b[i]) - 48);
			}
		}

		while (cont)
		{
			cont = false;

			if (table[0] >= 10)
			{
				maxLen++;
				table[0] -= 10;
				table.insert(table.begin(), 1);
			}

			for (int i = 1; i < maxLen; i++)
			{
				if (table[i] >= 10)
				{
					table[i] -= 10;
					table[i - 1]++;
					cont = true;
				}
			}
		}

		for (int i = 0; i < maxLen; i++)
		{
			cout << table[i];
		}
		cout << endl;
	}
	
	return 0;
}
