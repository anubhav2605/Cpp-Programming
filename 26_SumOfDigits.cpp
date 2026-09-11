#include <iostream>
using namespace std;

int main() {
    long long num;

    cout << "Enter an integer: ";
    cin >> num;

    long long temp = num;
    long long sum = 0;

    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
