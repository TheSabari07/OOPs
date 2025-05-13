#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Sabari";      
    s1.displayName();       
}
