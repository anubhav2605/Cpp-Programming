#include <iostream>
using namespace std;

int main() {
    int num;
    int reverse = 0;

    cout << "Enter an integer: ";
    cin >> num;

    int original = num;

    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original < 0) {
        reverse = -reverse;
    }

    cout << "Reverse = " << reverse << endl;

    return 0;
}
