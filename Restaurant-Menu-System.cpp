#include<iostream>
using namespace std;

class MenuItem{
    protected :
        string name;
        double price;
    public : 
        MenuItem(string n, double p) : name(n), price(p) {}

        virtual void display() {
            cout << name << " - ₹" << price << endl;
        }

        virtual ~MenuItem() {}

};

class FoodItem : public MenuItem {
    bool isVegetarian;

    public :
        FoodItem(string n, double p, bool veg) : MenuItem(n, p), isVegetarian(veg) {}

        void display() override {
            cout << name << " - ₹" << price << " (" << (isVegetarian ? "Vegetarian" : "Non-Vegetarian") << ")" << endl;
        }
        ~FoodItem() {}
};

class DrinkItem : public MenuItem {
    bool isCold;

    public :
        DrinkItem(string n, double p, bool cold) : MenuItem(n,p), isCold(cold) {}

        void display() override {
            cout << name << " - ₹" << price << " (" << (isCold ? "Cold" : "Hot") << ")" << endl;
        }

};

int main(){
    vector<MenuItem*> menu;

    menu.push_back(new FoodItem("Paneer Butter Masala", 180, true));
    menu.push_back(new FoodItem("Chicken Biryani", 220, false));
    menu.push_back(new DrinkItem("Coke", 40, true));
    menu.push_back(new DrinkItem("Masala Chai", 30, false));

    cout << "Restaurant Menu:" << endl;
    for (MenuItem* item : menu) {
        item->display();
    }

    for (MenuItem* item : menu) {
        delete item;
    }

    return 0;
}