#include <iostream>
using namespace std;

class Car{
  public:
    string brand;
    int speed;

    void drive(){
        cout << brand << " " << speed << endl;
    }
};

int main(){
    Car c1;

    c1.brand = "BMW";
    c1.speed = 200;
    c1.drive();

    return 0;
}

