#include "Classes.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;



Accounts::Accounts(const string acc_name, double acc_balance): name{acc_name}, balance{acc_balance}{
    account_number = set_account_number();
    cout << "Account created for " << name << " with initial balance: $" << balance << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "------------------------" << endl;
}

Accounts::Accounts(const string acc_name): Accounts{acc_name, 0.0} {account_number = set_account_number();}
Accounts::Accounts(): Accounts{"Default Account", 0.0} {account_number = set_account_number();}

int Accounts:: set_account_number() {
    return 100000+ (rand() % 1000000);
}
void Accounts::display(){
    cout << "Account Name: " << name << endl;
    cout << "Balance: $" << balance << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "------------------------" << endl;
}


void Accounts::set_name(string acc_name){
    name = acc_name;
    cout << "Account name set to: " << name << endl;
}

void Accounts::deposit(double amount){
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    } else {
        cout << "Deposit amount must be positive." << endl;
    }
}

void Accounts::withdraw(double amount){
    if (amount > 0 && amount <= balance){
        balance -= amount;
        cout << "Withdrew: $" << amount << endl;
    } else if (amount > balance) {
        cout << "Insufficient funds for withdrawal." << endl;
    } else {
        cout << "Withdrawal amount must be positive." << endl;
    }
}