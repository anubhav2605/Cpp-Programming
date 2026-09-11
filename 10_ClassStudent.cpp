#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Anubhav";
    s1.rollNo = 83;

    s1.display();

    return 0;
}
