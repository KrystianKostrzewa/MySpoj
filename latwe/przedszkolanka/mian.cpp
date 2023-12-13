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
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << a * b / nwd(a, b) << endl;
    }

    return 0;
}
