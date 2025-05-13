#include <iostream>
using namespace std;

class Animal {
protected:
    string species;

public:
    void setSpecies(string s) {
        species = s;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I am a " << species << " and I bark!" << endl;
    }
};

int main() {
    Dog d;
   
    d.setSpecies("Dog");     
    d.bark();                 
}
