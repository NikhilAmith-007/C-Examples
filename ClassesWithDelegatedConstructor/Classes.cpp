#include "Classes.h"
#include <iostream>
#include <string>

using namespace std;


Accounts::Accounts(const string acc_name, double acc_balance, const int acc_number): name{acc_name}, balance{acc_balance}, account_number{acc_number} {}

Accounts::Accounts(const string acc_name, const int acc_number): Accounts{acc_name, 0.0, acc_number} {}

Accounts::Accounts(const string acc_name): Accounts{acc_name, 0.0,-1} {}
Accounts::Accounts(): Accounts{"Default Account", 0.0, -1} {}


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