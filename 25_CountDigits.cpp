#include <iostream>
using namespace std;

int main() {
    long long num;

    cout << "Enter an integer: ";
    cin >> num;

    long long temp = num;
    int count = 0;

    if (temp < 0) {
        temp = -temp;
    }

    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    cout << "Number of digits = " << count << endl;

    return 0;
}
