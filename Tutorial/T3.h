//
// Created by CCK on 2021-03-01.
//

#ifndef CPLUSPLUS_TUTORIAL_T3_H
#define CPLUSPLUS_TUTORIAL_T3_H

#include <iostream>
#include <iomanip>

using namespace std;

class T3 {
public:
    static void myFunction() {
        cout << "I just got executed !";
    }

    static int handle1() {
        double measurement;
        cout << "Enter a length in inches, and i will convert \n";
        cout << "it in to centimeters: \n";
        cin >> measurement;
        convert(&measurement);
        cout << fixed << setprecision(4);
        cout << "Value in centromeres: " << measurement << endl;
    }


    static void handle2() {
        int test_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        cout << countEven(test_array, 10);

    }

    static void handle3() {
        int num;
        float quiz, assignment, exam;

        cout << "Number of students in the class: ";
        cin >> num;
        float *myArray = new float[num];
        for (int i = 0; i < num; i++) {
            cout << "What is quiz mark of student " << i + 1 << ": ";
            cin >> quiz;
            cout << "What is assignment mark of student " << i + 1 << ": ";
            cin >> assignment;
            cout << "What is exam mark of student " << i + 1 << ": ";
            cin >> exam;
            myArray[i] = (quiz * 0.2) + (assignment * 0.3) + (exam * 0.5);
        }
        for (int j = 0; j < num; j++) {
            cout << myArray[j] << endl;
        }
    }

private:
    static void convert(double *inch) {
        *inch = *inch * 2.54;
    }

    static int countEven(int *arr, int size) {
        size(arr);
        int counter = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0)
                counter = counter + 1;
        }
        return counter;
    }

    static void mark() {
        //
    }

};


#endif //CPLUSPLUS_TUTORIAL_T3_H
