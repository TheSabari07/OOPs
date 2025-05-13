#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int totalStudents;

    Student(string n) {
        name = n;
        totalStudents++;
    }

    void show() {
        cout << name << " | Total: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Sabari");
    Student s2("John");
    Student s3("Emma");

    s1.show(); // Total: 3
    s2.show(); // Total: 3
    s3.show(); // Total: 3
}

class Student {
    public:
        string name;
        static int totalStudents;
    
        Student(string n) {
            name = n;
            totalStudents++;
        }
    
        void show() {
            cout << name << " | Total: " << totalStudents << endl;
        }
    };
    
    int Student::totalStudents = 0;
    
    int main() {
        Student s1("Sabari");
        Student s2("John");
        Student s3("Emma");
    
        s1.show(); 
        s2.show(); 
        s3.show(); 
    }
    