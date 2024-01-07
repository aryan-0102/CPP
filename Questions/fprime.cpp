#include <iostream>

using namespace std;

int isprime(int a) {
    if (a <= 1) {
        return 0;  // 1 is not a prime number
    }
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int m, n;
    cout << "Enter M and N : ";
    cin >> m >> n;

    int start = (m > n) ? n : m;
    int end = (n > m) ? n : m;

    for (int i = start; i <= end; i++) {
        if (isprime(i)) {
            cout << i << " is the smallest prime number between "<<m<<" and "<<n<< endl;
            break;
        }
    }

    return 0;
}
