//
// Created by CCK on 2021-02-25.
//

#include "T2.h"


void T2::handle1() {
    double width1, width2, length1, length2;
    double area1, area2;
    cout << "Give me First Triangle width \n";
    cin >> width1;
    cout << "Give me First Triangle length \n";
    cin >> length1;
    area1 = width1 * length1;

    cout << "Give me Second Triangle width \n";
    cin >> width2;
    cout << "Give me Second Triangle length \n";
    cin >> length2;
    area2 = width2 * length2;

    if (area1 > area2) {
        cout << "first Triangle is bigger then second triangle\n";
    } else if (area1 < area2) {
        cout << "first Triangle is Smaller then second triangle\n";
    } else {
        cout << "They have equal area\n";
    }
}

void T2::handle2() {
    int input;
    cout << "Give me one number man!";
    cin >> input;
    switch (input) {
        case 1:
            cout << "The roman number for 1 is I";
            break;
        case 2:
            cout << "The roman number for 2 is II";
            break;
        case 3:
            cout << "The roman number for 3 is III";
            break;
        case 4:
            cout << "The roman number for 4 is IV";
            break;
        case 5:
            cout << "The roman number for 5 is V";
            break;
        case 6:
            cout << "The roman number for 6 is VI";
            break;
        case 7:
            cout << "The roman number for 7 is VII";
            break;
        case 8:
            cout << "The roman number for 8 is VII";
            break;
        case 9:
            cout << "The roman number for 9 is IX";
            break;
        case 10:
            cout << "The roman number for 10 is X";
            break;
        default:
            cout << "the number is not allowed";
            break;
    }
}

void T2::handle3() {
    const double caloriesBurnPerMinute = 3.9;
    int minuteWorked = 10;
    while (minuteWorked <= 31) {
        cout << "Working in " << minuteWorked << " is : " << minuteWorked * caloriesBurnPerMinute
             << " calories \n ";
        minuteWorked += 5;
    }
}

void T2::handle4() {
    int inputNumber;
    cout << "Give me more number with positive value! \n";
    cin >> inputNumber;

    while (inputNumber <= 0) {
        cout << "Already tell you to give me positive number lo ~ try again !\n";
        cin >> inputNumber;
    }

    int holder = 0;
    for (int i = 1; i <= inputNumber; i = i + 1) {
        cout << "value of a: " << i << endl;
        holder += i;
    }
    cout << "Final Number : " << holder;

}