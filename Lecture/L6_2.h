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


    void insertAtHead(int new_data) {
        //create a node
        struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));

        //get mark
        new_node->data = new_data;

        new_node->next = head;
        head = new_node;
    }

    /**
     * Add the data at the end of the line
     * @param new_data
     */
    void insertAtTail(int new_data) {
        struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
        //NodeType* newNode = new NodeType;
        new_node->data = new_data;

        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            return;
        }

        Node *last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;

    }

    bool search(int value) {
        Node *current = head;
        while (current != NULL)
            if (current->data == value)
                return true;
            else
                current = current->next;
        return false;
    }

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
        insertAtHead(1);
        insertAtHead(2);
        insertAtHead(3);
        insertAtHead(4);
        insertAtHead(5);
        //9 2 7 1 3
        cout << "The linked list is: ";
        display();
        cout << "Hmm :" << search(0);

//        insertAtTail(3);
//        insertAtTail(1);
//        insertAtTail(7);
//        insertAtTail(2);
//        insertAtTail(9);

//        //3 1 7 2 9
//        cout << "The linked list is: ";
//        display();
        return 0;
    }
};



