#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int i, string dept) : Employee(n, i), department(dept) {}

    void showManager() {
        display(); 
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Sabari", 101, "Engineering");
    m.showManager();
}
