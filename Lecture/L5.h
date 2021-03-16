//
// Created by CCK on 2021-03-16.
//

#ifndef CPLUSPLUS_TUTORIAL_L5_H
#define CPLUSPLUS_TUTORIAL_L5_H

#include <iostream>

using namespace std;

class A {
public:
    int sValue = 1;
};

class Room {
    double length = 0;
    double breadth = 0;
public:
    Room() {
        this->length = 6.9;
        this->breadth = 12;
    }

    Room(double length, double breath) {
        this->length = length;
        this->breadth = breath;
    }

    Room(double length) {
        this->length = length;
    }

    double calculateArea() {
        return this->length * this->breadth;
    }

    ~Room() {
        cout << "Destroyed !\n";
    }
};


class L5 {
public:

    static void handle1() {
        A a1, a2;
        a1.sValue++;
        cout << "a1.sValue : " << a1.sValue << "\n";

        a2.sValue++;
//        A::sValue++;

        cout << "a2.sValue : " << a2.sValue << "\n";
        cout << "a1.sValue : " << a1.sValue << "\n";

    }

    static void handle2() {
        Room room1, room2(8.2, 6.6), room3(8.2);
        cout << "Area of room1 : " << room1.calculateArea() << "\n";
        cout << "Area of room2 : " << room2.calculateArea() << "\n";
        cout << "Area of room3 : " << room3.calculateArea() << "\n";
        Room *roomPtr = &room1;
        /**
         * Accessing by using address :3
         */
        roomPtr->calculateArea();
        (*roomPtr).calculateArea();

        Room *roomPtr1 = new Room;
        roomPtr->calculateArea();
        delete &room1;
    }
};


#endif //CPLUSPLUS_TUTORIAL_L5_H
