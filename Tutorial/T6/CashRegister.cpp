//
// Created by CCK on 2021-03-22.
//

#include "CashRegister.h"
#include <iostream>
#include <iomanip>

using namespace std;

void CashRegister::acceptAmount(float d) {
    cout << "Accepted : " << d;
}

void CashRegister::printBalance() const {
    cout << cashOnHand;
}

void CashRegister::showSelection() {
    cout << "*** Welcome to Candy Shop ***" << endl;
    cout << "To select an item, enter " << endl;
    cout << "1 for Candy" << endl;
    cout << "2 for Chips" << endl;
    cout << "3 for Gum" << endl;


    cout << "4 Print Balance in Cash Register" << endl;
    cout << "5 to exit" << endl;
}

void CashRegister::main() {
    int choice, quantity;
    float getamount;


    CashRegister::showSelection();
    cin >> choice;


    CashRegister counter;


    while (choice != 5) {
        switch (choice) {
            case 1:
                cout << "Enter quantity of candy:";
                cin >> quantity;
                cout << "Candy price is RM" << fixed << setprecision(2) << quantity * 0.65 << endl;
                cout << "Enter amount of cash from customer:";
                cin >> getamount; //6.50
                counter.acceptAmount(getamount);
                //assume all amount cash from customer = price of sales
                break;
            case 2:
                cout << "Enter quantity of chips:";
                cin >> quantity;
                cout << "Chips price is RM" << fixed << setprecision(2) << quantity * 2.50 << endl;
                cout << "Enter amount of cash from customer:";
                cin >> getamount;
                counter.acceptAmount(getamount);
                //assume all amount cash from customer = price of sales
                break;
            case 3:
                cout << "Enter quantity of gum:";
                cin >> quantity;
                cout << "Gum price is RM" << fixed << setprecision(2) << quantity * 1.25 << endl;
                cout << "Enter amount of cash from customer:";
                cin >> getamount;
                counter.acceptAmount(getamount);
                //assume all amount cash from customer = price of sales
                break;
            case 4:
                counter.printBalance();
                break;
            default:
                cout << "Invalid selection." << endl;
        }
        showSelection();
        cin >> choice;
    }
}


