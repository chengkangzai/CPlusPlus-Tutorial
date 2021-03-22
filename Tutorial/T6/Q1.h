//
// Created by CCK on 2021-03-22.
//

#ifndef CPLUSPLUS_TUTORIAL_Q1_H
#define CPLUSPLUS_TUTORIAL_Q1_H

#include <iostream>

using namespace std;

class Q1 {
public:
    static void mark() {
        float quiz, assignment, exam;
        int num;

        cout << "Enter number of students in the class: ";
        cin >> num;

        auto *markArray = new float[num];
        for (int i = 0; i < num; i++) {
            cout << "\nStudents " << i + 1 << "\n What is quiz mark of student [0-20] ";
            cin >> quiz;

            while (quiz < 0 || quiz > 20) {
                cout << "Invalid input\n What is quiz mark of student [0-20] ";
                cin >> quiz;
            }

            cout << "What is assignment mark of student [0-30]";
            cin >> assignment;


            while (assignment < 0 || assignment > 30) {
                cout << "Invalid input\n What is assignment mark of student [0-30]";
                cin >> assignment;
            }

            cout << "What is exam mark of student [0-50]";
            cin >> exam;

            while (exam < 0 || exam > 50) {
                cout << "Invalid input\n What is exam mark of student [0-50]";
                cin >> exam;
            }
            markArray[i] = quiz + assignment + exam;
        }

        float average = 0;

        for (int i = 0; i < num; i++) {
            average += markArray[i];
        }
        cout << "Total average mark for all student = " << average / num << endl;

    }
};


#endif //CPLUSPLUS_TUTORIAL_Q1_H
