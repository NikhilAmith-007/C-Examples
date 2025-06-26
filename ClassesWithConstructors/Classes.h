#pragma once
#include <string>


class Player{

private:
    int health{100};
    std::string name{"Default Player"};
public:
    Player();
    Player(std::string name);
    Player(std::string name, int health);

    void talk(std::string);
    void set_name(std::string);
    std::string get_name();
    void set_health(int);
    int get_health();
};
