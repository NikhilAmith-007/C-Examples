#pragma once

#include <string>

class Player{

private:
    int health{100};
    int xp{1};
    std::string name{"Player"};

public:

    void talk(std::string);
    void set_name(std::string);   
    std::string get_name();
    bool is_dead();
};


class Account{

private:
    std::string name{"Account"};
    double balance{0.0};

public:
    void set_name(std::string);
    void set_balance(double);
    std::string get_name();
    double get_balance();
    void deposit(double);
    void withdraw(double);

};