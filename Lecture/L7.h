//
// Created by CCK on 2021-03-30.
//

#ifndef CPLUSPLUS_TUTORIAL_L7_H
#define CPLUSPLUS_TUTORIAL_L7_H

#include <iostream>

using namespace std;


class L7 {
public:
    struct Node {
        int data;
        struct Node *next;
    };

    struct Node *head = NULL;

    void insertatBeginnning(int new_data) {
        auto *new_node = (struct Node *) malloc(sizeof(struct Node));

        new_node->data = new_data;
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int new_data) {
        auto *new_node = (struct Node *) malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = NULL;


        if (head == NULL)
            head = new_node;
        else {
            Node *last = head;
            while (last->next != NULL) {
                last = last->next;
            }
            last->next = new_node;
        }
    }


    void display() {
        struct Node *ptr;
        ptr = head;
        while (ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }

    bool search(int value) const {
        Node *current = head;
        while (current != NULL) {
            if (current->data == value)
                return true;
            else
                current = current->next;
        }
        return false;;
    }

    int size() {
        struct Node *ptr;
        ptr = head;
        int temp = 0;

        while (ptr != nullptr) {
            temp++;
            ptr = ptr->next;
        }
        return temp;
    }

    int getItemAt(int index) {
        if (index < 0 || index >= size()) {
            throw "Index out of bound. \n";
        }
        Node *current = head;
        for (int i = 0; i < index; i++)
            current = current->next;
        return current->data;
    }


    int main() {
        insertAtEnd(3);
        insertAtEnd(1);
        insertAtEnd(7);
        insertAtEnd(2);
        insertAtEnd(9);
        insertAtEnd(8);
        insertAtEnd(3);
        insertAtEnd(3);
        insertAtEnd(3);
        insertAtEnd(3);
        insertAtEnd(9);
        insertAtEnd(8);
//3 1 7 2 9
//        cout << "The linked list is: ";
//        display();


//        cout << "Hmm" << search(100);// New
//        cout << "Hmm" << size();// New
        cout << getItemAt(0);

        return 0;
    }
};


int main (){
    L7().main();
}

#endif //CPLUSPLUS_TUTORIAL_L7_H