#include "Classes.h"
#include <iostream>
#include <string>

using namespace std;


int main(){
{
    Player player1{"Nikhil"};       // Calls the constructor with one argument
    player1.talk("Hello, world!");      // Calls the talk method
    player1.set_health(80);     // Sets the health of player1 to 80
    cout << player1.get_name() << " has health: " << player1.get_health() << endl;      // Outputs the name and health of player1
}
    cout <<endl;
    cout<< "===========================" << endl;
    cout<<endl;

    Player player2{"Hero",90};
    player2.talk("I am a hero!");
    cout << player2.get_name() << " has health: " << player2.get_health() << endl;

    
    return 0;
}