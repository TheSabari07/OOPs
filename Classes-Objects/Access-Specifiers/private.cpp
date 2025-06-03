#include <iostream>
using namespace std;

class Car{
private:
    string brand;
    int speed;
public:
    void setBrand(string b){
        brand = b;
    }
    void setSpeed(int s){
        speed =s;
    }
    void drive(){
        cout << brand << " " << speed << endl;
    }
};

int main(){
   Car c;
   
   c.setBrand("Audi");
   c.setSpeed(300);
   c.drive();

   return 0;
}
