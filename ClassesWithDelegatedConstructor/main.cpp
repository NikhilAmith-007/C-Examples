#include "Classes.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));
    Accounts acc1{"Nikhil",1000.0};

    acc1.set_name("Nikhil Amith");
    acc1.deposit(200);
    acc1.display();
    acc1.withdraw(500);
    acc1.display();


    Accounts acc2{"John"};

    acc2.deposit(300);
    acc2.display();
    acc2.withdraw(100);


    return 0;
}