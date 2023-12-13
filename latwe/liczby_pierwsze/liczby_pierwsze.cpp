#include <iostream>

using namespace std;

int main()
{
    int t, x;
    cin >> t;

    while (t--)
    {
        cin >> x;
        if (x < 2) { cout << "NIE" << endl; }
        for (int i = 2; i <= x; i++)
        {
            if (x == 2) { cout << "TAK" << endl; }
            else if (x % i == 0) { cout << "NIE" << endl; break; }
            else if (i > x / 2) { cout << "TAK" << endl; break; }

        }
    }
}
