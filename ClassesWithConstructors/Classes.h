#pragma once
#include <string>
#include <iostream>

using namespace std;

class Player{

private:
    int health;
    std::string name;
public:
    Player(std::string nam_val= "None", int health_val = 100);

   

    void talk(std::string);
    void set_name(std::string);
    std::string get_name();
    void set_health(int);
    int get_health();

    ~Player() {
        std::cout << "Destructor called for player: " << name << std::endl;
    }
};
