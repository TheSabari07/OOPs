#include <iostream>
using namespace std;

class Car{
 protected:
    string brand;

 public:
 void setName(string n) {
    brand = n;
}
};

class sportsCar : public Car {
  public:
    void display(){
        cout << "brand : " << brand << endl;
    }
};

int main(){
   sportsCar c;

   c.setName("Audi");
   c.display();

   return 0;
}
