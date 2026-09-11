#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two positive integers: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Please enter positive integers.";
        return 0;
    }

    int x = a;
    int y = b;

    // Calculate GCD using Euclidean algorithm
    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    int gcd = x;
    int lcm = (a / gcd) * b;

    cout << "LCM = " << lcm << endl;

    return 0;
}
