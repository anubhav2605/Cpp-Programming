#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1;

    e1.name = "Anubhav";
    e1.id = 101;
    e1.salary = 50000.0;

    e1.display();

    return 0;
}
