#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 45, 23, 78, 56};

    int largest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "Largest element = " << largest << endl;

    return 0;
}
