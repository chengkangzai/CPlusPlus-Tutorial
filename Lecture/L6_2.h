//
// Created by CCK on 2021-03-23.
//

#ifndef CPLUSPLUS_TUTORIAL_L6_2_H
#define CPLUSPLUS_TUTORIAL_L6_2_H


#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node *next;
};


struct Node *head = NULL;

void insertAtEnd(int value) {
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
//NodeType* newNode = new NodeType;
    new_node->data = value;
    new_node->next = NULL;
    if (head == NULL)
        head = new_node;
    else {
        Node *last = head;
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }
}

void display() {
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

class L6_2 {
public:
    static void main() {
        insertAtEnd(3);
        insertAtEnd(1);
        insertAtEnd(7);
        insertAtEnd(2);
        insertAtEnd(9);
        cout << "The linked list is: ";
        display();
    }
};


#endif //CPLUSPLUS_TUTORIAL_L6_2_H
