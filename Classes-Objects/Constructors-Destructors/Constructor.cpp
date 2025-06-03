#include <iostream>
using namespace std;

class Person {
private :
    string name;
    int age;

public:
    Person(string b , int n){
       name = b;
       age = n;
       cout << "Constructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    ~Person(){
        cout << "Destructor called for " << name << endl;
    }

};

int main() {
   Person p1("Alice", 30);
   Person p2("Bob", 25);

   p1.display();
   p2.display();

    return 0;
}
