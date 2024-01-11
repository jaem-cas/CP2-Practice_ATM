#include <iostream>

using namespace std;

int main()
{
    int balance = 1000;
    int inputValue, menu, toContinue;

    do {
    cout << "MENU\n"
        << "1. Deposit\n"
        << "2. Withdraw\n"
        << "3. Exit\n";

    cout << "Enter choice: ";
    cin >> menu;

    if (menu == 1) {
        cout << "\nDEPOSIT\n"
            << "Enter amount to deposit: ";
    }
    else if (menu == 2) {
        cout << "\nWITHDRAW\n"
            << "Enter amount to withdraw: ";
    }
    else if (menu == 3) {

        return 0;
    }

    cin >> inputValue;
   
    switch (menu) {

    case 1:
        balance += inputValue;
    break;

    case 2:
        balance -= inputValue;
    break;

    default: cout << "\nInvalid choice";
    }

    cout << "\nNew Balance: " << balance;
    
    cout << "\n\nDo you want to make another transaction?\n"
        << "Press any number to CONTINUE\n"
        << "Press 0 to EXIT\n";
    cin >> toContinue;
    cout << "\n";
 
    } 
    while (toContinue != 0);

    return 0;
}
