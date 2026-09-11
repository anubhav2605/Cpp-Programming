#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 45, 23, 78, 56};

    int smallest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "Smallest element = " << smallest << endl;

    return 0;
}
