#include <iostream>
using namespace std;

class Pizza {
public:
    int* slices;

    Pizza(int s) {
        slices = new int(s);  
    }

    
    Pizza(const Pizza& other) {
        slices = new int(*other.slices);  
    }

    void show(string name) {
        cout << name << " has " << *slices << " slices at address " << slices << endl;
    }

    ~Pizza() {
        delete slices; 
    }
};

int main() {
    Pizza kid1(8);        
    Pizza kid2 = kid1;    

    *kid2.slices = 3;     

    kid1.show("Kid1");     
    kid2.show("Kid2");     
}
