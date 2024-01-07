#include <iostream>

using namespace std;

int main() {
    cout << "Enter triangle's sides";
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "It is an equilateral triangle";
    } else if (a == b || b == c || a == c) {
        cout << "It is an isosceles triangle";
    } else {
        cout << "It is a scalene triangle";
    }

    return 0;
}
