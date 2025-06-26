#include "Classes.h"
#include <iostream>
#include <string>

using namespace std;


int main(){

    Player player1{"Nikhil"};

    player1.talk("Hello, world!");
    player1.set_health(80);
    cout << player1.get_name() << " has health: " << player1.get_health() << endl;
    player1.set_name("Nikhil Amith");
    cout << player1.get_name() << " has health: " << player1.get_health() << endl;
    return 0;
}