#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    double area() {
        return length * width;
    }

    double perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;

    cout << "Enter length: ";
    cin >> r.length;

    cout << "Enter width: ";
    cin >> r.width;

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
