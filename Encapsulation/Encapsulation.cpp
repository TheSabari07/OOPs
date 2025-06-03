#include <iostream>
using namespace std;

class BankAccount {
    private:
        int balance; 
    
    public:
        void deposit(int amount) {
            if (amount > 0) balance += amount;
        }
    
        int getBalance() {
            return balance;
        }
    };
    
    int main() {
        BankAccount acc;
        acc.deposit(1000);
        cout << "Balance: " << acc.getBalance() << endl;
      
    }
    