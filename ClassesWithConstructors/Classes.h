#pragma once
#include <string>
#include <iostream>

using namespace std;

class Player{

private:
    int health{100};
    std::string name{"Default Player"};
public:
    Player(){cout<< "no args constructor called" << endl;}
    Player(std::string name){cout <<"one args constructor called" << endl;}
    Player(std::string name, int health){cout << "two args constructor called" << endl;}

    void talk(std::string);
    void set_name(std::string);
    std::string get_name();
    void set_health(int);
    int get_health();

    ~Player() {
        std::cout << "Destructor called for player: " << name << std::endl;
    }
};
