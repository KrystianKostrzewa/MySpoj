#include <iostream>
#include <cstdlib>

using namespace std;

int nwd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        }
    return a;
}

int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cout << nwd(x, y) << endl;
    }

	return 0;
}
