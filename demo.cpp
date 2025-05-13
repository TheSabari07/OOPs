#include <iostream>
using namespace std;

class Car {
    public :
        string brand;
        int speed;

        void show(){
            cout << brand << "is driving at" << speed << "km/h" << endl;
    }
};

int main (){
    Car mycar;
    mycar.brand = "BMW";
    mycar.speed = 100;
    mycar.show();
    
}