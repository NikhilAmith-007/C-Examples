#include "Classes.h"
#include <iostream>

using namespace std;


// Player class methods


                                    // this method allows the player to talk by printing a message to the console
void Player::talk(string text) {                    
    cout << name << ": " << text << endl; 
}   

                                    // this method sets the player's name to a new value
void Player::set_name(string new_name) {
    name = new_name;
}


                                    // this method returns the player's name
string Player::get_name() {
    return name;
}   


                                    // this method checks if the player is dead by comparing health to 0
bool Player::is_dead() {
    return health <= 0;
}


// Account class methods

                                    // this method sets the account's name to a new value
void Account::set_name(string new_name) {
    name = new_name;
}

                                    // this method sets the account's balance to a new value
void Account::set_balance(double new_balance) {
    balance = new_balance;
}

                                    // this method returns the account's name
string Account::get_name() {
    return name;
}

                                    // this method returns the account's balance
double Account::get_balance() {
    return balance;
}

                                    // this method deposits a specified amount into the account
void Account::deposit(double amount) {
    if (amount < 0) {
        cout << "Deposit amount must be positive!" << endl;
        return;
    }
    balance += amount;
}

                                    // this method withdraws a specified amount from the account
void Account::withdraw(double amount) {
    if (amount < 0) {
        cout << "Withdrawal amount must be positive!" << endl;
        return;
    }
    if (amount > balance) {
        cout << "Insufficient funds!" << endl;
        return;
    }
    balance -= amount;
}
