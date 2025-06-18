#include <iostream>
using namespace std;

template <class T>
class Box{
    T value;
    public:
        Box(T v) : value(v) {}

        T getValue() {
            return value;
        }
};

int main(){
    Box<int> intBox(07);
    Box<string> strBox("Hello Kausika");

    cout << "Integer Box Value: " << intBox.getValue() << endl;
    cout << "String Box Value: " << strBox.getValue() << endl;
}
