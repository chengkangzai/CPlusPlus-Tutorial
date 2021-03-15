//
// Created by CCK on 2021-03-15.
//

#ifndef CPLUSPLUS_TUTORIAL_L5_H
#define CPLUSPLUS_TUTORIAL_L5_H

#include "string"
#include "iostream"

using namespace std;

class L5 {
public:
    static void handle1() {

//*1.Store a value of "Pizza" into string datatype of the variable named 'food'.
        string food = "Pizza";
//*2.Display output the value of 'food'
        cout << "Display output the value of 'food' : " << food << "\n";
//*3.Display output the memory address of 'food'
        cout << "Display output the memory address of 'food' : " << &food << "\n";
//*4.Create a pointer with string datatype of the variable named 'ptr' to store the memory address of food.
        string *ptr = &food;
//*5.Display output the value of 'ptr'
        cout << "Display output the value of 'ptr'" << *ptr << "\n";
//*6.Get memory address and value of variable food by using pointer. Implement Referencing and Dereferencing.
        cout << "Get memory address and value of variable food by using pointer \n";
        cout << &food << "\n";
//*7.Change the value of the pointer from "Pizza" to "Hamburger"
        *ptr = "Hamburger";
//*8.Display the new value of the pointer and variable 'food'.
        cout << "Display the new value of the pointer and variable 'food'. \n";
        cout << food << "\n";
        cout << *ptr << "\n";
    }

    static void handle2() {
        int arraySize;
        cout << "How many la ?";
        string holder;
        getline(cin, holder);
        arraySize = stoi(holder);
        string *array = new string[arraySize];
        for (int i = 0; i < arraySize; ++i) {
            int j = i + 1;
            cout << "Give me the value for number : " << j << " --> ";
//            getline(cin, array[i]);
        }

        cout << "Ok... this is what you enter \n";
        for (int i = 0; i < arraySize; ++i) {
            int j = i + 1;
            cout << "array number " << j << " is " << array[i] << "\n";
        }
    }

    static void handle3() {
        int balance[5] = {100, 2568, 328, 7, 5140};
        double avg = getAverage(balance, 5);
        cout << "Average is " << avg;
    }

private:
    static double getAverage(int *arr, int size) {
        double holder = 0;
        for (int i = 0; i < size; ++i) {
            holder += arr[i];
        }
        return holder / size;
    }
};


#endif //CPLUSPLUS_TUTORIAL_L5_H
