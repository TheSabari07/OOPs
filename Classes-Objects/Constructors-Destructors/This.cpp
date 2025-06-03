#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
   void setName(string name){
        this->name = name;
   }
    void showName() {
          cout << "Name: " << name << endl;
     }
};

int main() {
    Student s;
    s.setName("Sabari");
    s.showName(); 
}
