#include "Classes.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    Accounts acc1{"Nikhil",1000.0,974207};
    acc1.display();
    acc1.set_name("Nikhil Amith");
    acc1.deposit(200);
    acc1.display();
    acc1.withdraw(500);
    acc1.display();






    return 0;
}