#include <iostream>
#include <cstdlib>

using namespace std;

struct Point {
    int x, y;
};

int calculateArea(Point A, Point B, Point C) {
    return (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
}

bool areCollinear(Point A, Point B, Point C) {
    return calculateArea(A, B, C) == 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Point A, B, C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;

        if (areCollinear(A, B, C)) {
            cout << "TAK" << endl;
        }
        else {
            cout << "NIE" << endl;
        }
    }

    return 0;
}