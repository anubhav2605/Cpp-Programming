#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number.";
        return 0;
    }

    long long first = 0;
    long long second = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << first;

        if (i < n) {
            cout << " ";
        }

        long long next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
