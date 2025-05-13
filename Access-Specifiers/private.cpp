#include <iostream>
using namespace std;

class Student {
private : 
    string name;
public:
   void setname(string n) {
        name = n;
    }
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setname("Sabari");
    s1.displayName();
}
