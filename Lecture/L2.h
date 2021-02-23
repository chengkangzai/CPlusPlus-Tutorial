//
// Created by CCK on 2021-02-23.
//

#ifndef CPLUSPLUS_TUTORIAL_L2_H
#define CPLUSPLUS_TUTORIAL_L2_H

#include <iostream>
#include <string>

const int NUMBER = 12;

using namespace std;

class L2 {
public:
    void static handle() {
        int firstNum;
        int secondNum;
        firstNum = 18;
        cout << "Line 21 : " << firstNum << "\n";

        cout << "Line 23 " << "Enter an integer : ";
        cin >> secondNum;
        cout << "\n";
        cout << "Line 13: second number = " << secondNum << "\n";

        firstNum = firstNum + NUMBER + 2 * secondNum;
        cout << "Line 29: the new value of first Num = " << firstNum << "\n";
    };

    void static handle2() {
        int counter = 3;
        while (counter <= 10) {
            cout << counter << " ";
            counter++;
        }
    }

    static void handle3() {
        int variable;
        cout << "Give me some number \n";
        cin >> variable;

        while (variable <= 10) {
            cout << "Variable :" << variable << "\n";
            cin >> variable;
        }

        cout << "OK bye";
    }


    static void handle4() {
        //example of flag control loop
        int sum; // the sum of the numbers read
        bool done; // used to control the while loop
        int number; // the number read

        sum = 0; // initialize the sum
        done = false; // initialize the boolean variable done

        while (!done) // loop while not done
        {
            cin >> number; // read next number
            if (number > 0) // sum number if positive
                sum = sum + number; // sum the number
            else
                done = true; // terminate the loop
        }
    }
};


#endif //CPLUSPLUS_TUTORIAL_L2_H
