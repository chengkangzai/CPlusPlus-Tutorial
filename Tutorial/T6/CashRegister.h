//
// Created by CCK on 2021-03-22.
//

#ifndef CPLUSPLUS_TUTORIAL_CASHREGISTER_H
#define CPLUSPLUS_TUTORIAL_CASHREGISTER_H


class CashRegister {
private:
    int cashOnHand = 0;

public:
    static void acceptAmount(float d);

    void printBalance() const;

    static void showSelection();

    static void main();
};


#endif //CPLUSPLUS_TUTORIAL_CASHREGISTER_H
