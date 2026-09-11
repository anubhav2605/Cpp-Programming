#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int search, position = -1;

    cout << "Enter a number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == search) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << search << " found at position " << position + 1 << ".";
    }
    else {
        cout << search << " not found in the array.";
    }

    return 0;
}
