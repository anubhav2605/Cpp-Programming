#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer.";
        return 0;
    }

    int original = num;
    int temp = num;
    int digits = 0;

    if (num == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
    }

    long long sum = 0;
    temp = num;

    while (temp != 0) {
        int digit = temp % 10;

        long long power = 1;
        for (int i = 1; i <= digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        cout << original << " is an Armstrong number.";
    } else {
        cout << original << " is not an Armstrong number.";
    }

    return 0;
}
