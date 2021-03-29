#include <iostream>

using namespace std;

class L6_2 {
public:
    //initialzation linked list
//class or struct
    struct Node {
        int data;
        struct Node *next;
    };


/*class Node {
public:
int data;
Node* next;
};
*/
    struct Node *head = NULL;


    void insert(int new_data) {
        //create a node
        struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

        //get mark
        new_node->data = new_data;

        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int new_data) {
        struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
        //NodeType* newNode = new NodeType;
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


/*
//example of transversing the linked list
Node* ptr;
ptr = head;
while (ptr != NULL) {
//put your operations inside here
ptr = ptr->next;
}
*/



    void display() {
        //transverse
        struct Node *ptr;
        ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }

    int main() {
        insert(3);
        insert(1);
        insert(7);
        insert(2);
        insert(9);
        //9 2 7 1 3
        cout << "The linked list is: ";
        display();


        insertAtEnd(3);
        insertAtEnd(1);
        insertAtEnd(7);
        insertAtEnd(2);
        insertAtEnd(9);
        //3 1 7 2 9
        cout << "The linked list is: ";
        display();
        return 0;
    }
};



