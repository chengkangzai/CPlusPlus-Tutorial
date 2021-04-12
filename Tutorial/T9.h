//
// Created by CCK on 2021-04-12.
//

#ifndef CPLUSPLUS_TUTORIAL_T9_H
#define CPLUSPLUS_TUTORIAL_T9_H

#include <iostream>
#include <string>

using namespace std;

class T9 {
public:
    struct classInfo {
        int stud_id;
        float test, assignment, quiz, final;
        classInfo *next;

        void print() {
            cout << "Student id : " << this->stud_id << " ";
            cout << "Total marks : " << totalMarks(this) << "  ";
            cout << "Test : " << this->test << " ";
            cout << "Assignment : " << this->assignment << " ";
            cout << "Quiz : " << this->quiz << " ";
            cout << "Final : " << this->final << " " << endl;
        }

        static float totalMarks(classInfo *ptr) {
            return ptr->test + ptr->assignment + ptr->quiz + ptr->final;
        }
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

        if (head == nullptr) {
            cout << "No Record ! la my friend";
            return;
        }

        while (ptr != NULL) {
            ptr->print();
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
        cout << "Enter Book ID \n";
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

    void searchRecord() {
        struct classInfo *current = head;
        int id;
        cout << "Enter Student ID " << endl;
        cin >> id;
        while (current != nullptr) {
            if (current->stud_id == id) {
                return current->print();
            } else {
                current = current->next;
            }
        }
    }

    void updateRecord() {

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


        classInfo *current = head;

        while (current != NULL) {
            if (current->stud_id == studentId) {
                current->test = test * 20 / 100;
                current->assignment = assignment * 20 / 100;
                current->quiz = quiz * 10 / 100;
                current->final = final * 50 / 100;
            }
            current = current->next;
        }

    }

    void deleteRecord() {
        int studentID;
        cout << "Enter Student ID \n";
        cin >> studentID;

        if (studentID == 1) {
            head = head->next;
            return;
        }

        classInfo *prev = head;
        classInfo *current = head->next;
        while (current != nullptr) {
            if (current->stud_id == studentID) {
                break;
            } else {
                prev = current;
                current = current->next;
            }
        }

        prev->next = current->next; // link the previous node to the next node
        delete current;

    }

    void reset() {
        head = nullptr;
    }

    void main() {

        this->init();
        bool run = true;
        while (run) {
            int operation;
            cout << "What is the operation ? \n";
            cout << "1. Add new record\n";
            cout << "2. Display all record\n";
            cout << "3. Find best student\n";
            cout << "4. Search by student ID\n";
            cout << "5. Update Student Record by student ID\n";
            cout << "6. Delete Student Record by student ID\n";
            cout << "7. Exit \n";
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
                case 4:
                    searchRecord();
                    break;
                case 5:
                    updateRecord();
                    break;
                case 6:
                    deleteRecord();
                    break;
                case 7:
                    reset();
                    return;
                default:
                    run = false;
                    break;
            }
        }

    }

private:
    void init() {
        newRecord(1, 10, 20, 20, 20);
        newRecord(2, 30, 40, 60, 60);
        newRecord(3, 80, 80, 80, 80);
        newRecord(4, 100, 100, 100, 100);
    }
};


#endif //CPLUSPLUS_TUTORIAL_T9_H
