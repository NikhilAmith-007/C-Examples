#include "Classes.h"
#include <iostream>


void Player::talk(std::string message) {
    std::cout << name << " says: " << message << std::endl;
}   

void Player::set_name(std::string new_name) {
    name = new_name;
}

std::string Player::get_name() {
    return name;
}

void Player::set_health(int new_health) {
    health = new_health;
}

int Player::get_health() {
    return health;
}

Player::Player(std::string name_val, int health_val) : health{health_val}, name{name_val} {}

Player::Player() : Player{"None", 100} {}

Player::Player(std::string name_val) : Player{name_val, 100} {}
