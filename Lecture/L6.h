//
// Created by CCK on 2021-03-23.
//

#ifndef CPLUSPLUS_TUTORIAL_L6_H
#define CPLUSPLUS_TUTORIAL_L6_H

#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int new_data) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void display() {
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

class L6 {
public:
    static void main() {
        insert(3);
        insert(1);
        insert(7);
        insert(2);
        insert(9);
        cout << "The linked list is: ";
        display();
    }
};


#endif //CPLUSPLUS_TUTORIAL_L6_H
