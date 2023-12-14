#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		string password = "";
		for (int i = 0; i < 20; i += 2)
		{
			password += (s[i] - 'A') + (s[i + 1] - 'A') * 16;
		}
		cout << password << endl;
	}
	return 0;
}
