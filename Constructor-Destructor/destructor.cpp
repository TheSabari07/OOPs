#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;


    Car() {
        cout << "Car object created!" << endl;
    }
    
  ~Car() {
        cout << "Destructor called!" << endl;
    }
  
};

int main() {
    Car c1;  
    
}