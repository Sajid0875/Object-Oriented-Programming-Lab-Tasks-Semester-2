#include <iostream>
using namespace std;

class BankAccount {
    string AccountNumber;
    string AccountHolder;
    double StoreBalance;
    static double interestRate; 
    double interest;

public:
   
    BankAccount() {
        AccountNumber = "N/A";
        AccountHolder = "Unknown";
        StoreBalance = 0.0;
    }

    
    BankAccount(string Number, string Name, double Balance) {
        AccountNumber = Number;
        AccountHolder = Name;
        StoreBalance = Balance;
        interestRate = 5; 
    }

   
    ~BankAccount() {
        cout << AccountNumber << " Account is closed" << endl;
    }

  
    void Deposit(double Amount) {
        StoreBalance = StoreBalance + Amount;
        cout << "Your new balance is " << StoreBalance << endl;
    }

   
    void Withdraw(int WithdrawAmount) {
        if (WithdrawAmount > StoreBalance) {
            cout << "Insufficient Balance" << endl;
        } else {
            StoreBalance = StoreBalance - WithdrawAmount;
            cout << "Your new balance is " << StoreBalance << endl;
        }
    }

  
    void CalculateInterest() {
        interest = (StoreBalance / 100) * interestRate;
    }

  
    void Display() {
        cout << "Account Number: " << AccountNumber << endl;
        cout << "Account Holder: " << AccountHolder << endl;
        cout << "Account Balance: " << StoreBalance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Interest Amount: " << interest << endl;
    }
};


double BankAccount::interestRate = 5.0;

int main() {
    BankAccount obj1("0745", "Sajid", 1000.0); 
    obj1.Deposit(500); 
    obj1.Withdraw(300); 
    obj1.CalculateInterest();
    obj1.Display();
    
    
    BankAccount obj2("0845", "Ahmad", 7000.0); 
    

    obj2.Deposit(8500); 
    obj2.Withdraw(1300); 
    obj2.CalculateInterest();
    obj2.Display();
    return 0;
}

