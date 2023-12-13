#include <iostream>

using namespace std;

int main()
{
    int t, n, sum, x;
    cin >> t;

    while (t--)
    {
        sum = 0;
        cin >> n;
        while (n--)
        {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }

}
