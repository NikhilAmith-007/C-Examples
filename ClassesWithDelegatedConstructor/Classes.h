#pragma once
#include <iostream>
#include <string>

using namespace std;

class Accounts {

private:
    string name;
    double balance;
    int account_number;

public:
    Accounts(const string acc_name,double acc_balance,const int acc_number);
    Accounts(const string acc_name, const int acc_number);
    Accounts(const string acc_name);
    Accounts();

    void display();

    void set_name(string acc_name);

    void deposit(double);
    void withdraw(double);

    ~Accounts(){
        cout << "Account " << name << " with account number " << account_number << " is being deleted." << endl;
        cout << "Final balance: $" << balance << endl;
        cout << "------------------------" << endl; 
    }

};