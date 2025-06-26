#include <iostream>
#include "Classes.h"


using namespace std;

int main() {

    Player player1;
    string player_name{};

    cout << "Enter player name: ";  // Using getline to allow for names with spaces
    getline(cin, player_name);

    player1.set_name(player_name);
    player1.talk("Hello, world!");

    Account account1;
    account1.set_name("Savings");

    double initial_balance;
    cout << "Enter initial balance for the account: ";
    cin >> initial_balance;
    account1.set_balance(initial_balance);

    account1.deposit(500.0);
    cout << "Account Name: " << account1.get_name() << endl;
    cout << "Account Balance: $" << account1.get_balance() << endl;

    return 0;
}

