#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array in reverse order:" << endl;

    for (int i = 4; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}
