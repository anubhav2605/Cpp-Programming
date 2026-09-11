#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(static_cast<unsigned char>(ch));

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel.";
        }
        else {
            cout << ch << " is a consonant.";
        }
    }
    else {
        cout << "Please enter an alphabet character.";
    }

    return 0;
}
