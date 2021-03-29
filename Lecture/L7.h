//
// Created by CCK on 2021-03-29.
//

#ifndef CPLUSPLUS_TUTORIAL_L7_H
#define CPLUSPLUS_TUTORIAL_L7_H

#include <iostream>
#include <string>

using namespace std;


class L7 {
public:
    struct classInfo {
        int stud_id;
        float test, assignment, quiz, final;
        classInfo *next;
    };
    struct classInfo *head = NULL;

    void newRecord(int studentId, float test, float assignment, float quiz, float final) {
        struct classInfo *newNode = (struct classInfo *) malloc(sizeof(struct classInfo));
        if (isDuplicateId(studentId)) {
            cout << "Duplicate ID!";
            return;
        }
        newNode->stud_id = studentId;
        newNode->test = test * 20 / 100;
        newNode->assignment = assignment * 20 / 100;
        newNode->quiz = quiz * 10 / 100;
        newNode->final = final * 50 / 100;

        newNode->next = NULL;
        if (head == NULL)
            head = newNode;
        else {
            classInfo *last = head;
            while (last->next != NULL) {
                last = last->next;
            }
            last->next = newNode;
        }
    }

    /**
     * Traverse the linked list
     */
    void display() {
        struct classInfo *ptr;
        ptr = head;


        while (ptr != NULL) {
            cout << "Student id : " << ptr->stud_id << " ";
            cout << "Total marks : " << this->totalMarks(ptr);
//            cout << "Test : " << ptr->test << " ";
//            cout << "Assignment : " << ptr->assignment << " ";
//            cout << "Quiz : " << ptr->quiz << " ";
//            cout << "Final : " << ptr->final << " ";
            cout << "\n";
            ptr = ptr->next;
        }
    }

    bool isDuplicateId(int id) {
        struct classInfo *ptr;
        ptr = head;

        while (ptr != NULL) {
            if (id == ptr->stud_id) {
                return true;
            }
            ptr = ptr->next;
        }
        return false;
    }

    float totalMarks(classInfo *ptr) {
        return ptr->test + ptr->assignment + ptr->quiz + ptr->final;
    }

    void bestStudent() {
        struct classInfo *ptr;
        ptr = head;
        float temp = 0;
        int studentId = 0;
        while (ptr != NULL) {
            if (temp == 0) {
                temp = this->totalMarks(ptr);
                studentId = ptr->stud_id;
            } else {
                if (this->totalMarks(ptr) > temp) {
                    temp = this->totalMarks(ptr);
                    studentId = ptr->stud_id;
                }
            }
            ptr = ptr->next;
        }
        cout << "Best student id is : " << studentId << "\n";
    }

    void askForInput() {
        string temp;
        int studentId;
        float test, assignment, quiz, final;
        cout << "Enter Student ID \n";
        cin >> temp;
        studentId = stoi(temp);

        cout << "Enter Student TEST Marks (100%) \n";
        cin >> temp;
        test = stof(temp);

        cout << "Enter Student ASSIGNMENT Marks (100%) \n";
        cin >> temp;
        assignment = stof(temp);

        cout << "Enter Student QUIZ Marks (100%) \n";
        cin >> temp;
        quiz = stof(temp);

        cout << "Enter Student FINAL Exam Marks (100%) \n";
        cin >> temp;
        final = stof(temp);

        newRecord(studentId, test, assignment, quiz, final);
    }

    [[noreturn]] void main() {
        bool run = true;
        while (run) {
            int operation;
            cout << "What is the operation ? \n";
            cout << "1. Add new record\n";
            cout << "2. Display all record\n";
            cout << "3. Find best student\n";
            cin >> operation;

            switch (operation) {
                case 1:
                    askForInput();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    bestStudent();
                    break;
                default:
                    run = false;
                    break;
            }
        }

    }
};


#endif //CPLUSPLUS_TUTORIAL_L7_H
