//
// Created by CCK on 2021-04-13.
//

#ifndef CPLUSPLUS_TUTORIAL_L9_H
#define CPLUSPLUS_TUTORIAL_L9_H

#include <iostream>

using namespace std;

class L9 {
public:
    class NodeType {
    public:
        int info;
        NodeType *link;
    };

    class LinkedList {
    public:
        NodeType *head;
        int size;

        LinkedList() {
            this->size = 0;
            this->head = nullptr;
        }

        int getSize() {
            int temp = 0;
            NodeType *current = head;
            while (current != nullptr) {
                temp++;
                current = current->link;
            }
            return temp;
        }

        void print() {
            NodeType *current = head;
            while (current != nullptr) {
                cout << current->info << " ";
                current = current->link;
            }
        }

        void insertAtBeginning(int value) {
            auto *newNode = new NodeType;
            newNode->info = value;
            newNode->link = head;
            head = newNode;
            size++;
        }

        void insertAtEnd(int value) {
            auto *newNode = new NodeType;
            newNode->info = value;
            newNode->link = nullptr;

            if (head == nullptr)
                head = newNode;
            else {
                NodeType *last = head;
                while (last->link != nullptr)
                    last = last->link;
                last->link = newNode;
            }
            size++;
        }


        void clear() {
            NodeType *current = head;
            while (head != nullptr) {
                current = current->link;
                delete head;
                head = current;
            }
            size = 0;
        }

        bool search(int value) {
            NodeType *current = head;
            while (current != nullptr)
                if (current->info == value)
                    return true;
                else
                    current = current->link;
            return false;
        }

        int getItemAt(int index) {
            if (index < 0 || index >= size) {
                cout << "Index out of bound.\n";
                abort();
            }
            NodeType *current = head;
            for (int i = 0; i < index; i++)
                current = current->link;
            return current->info;
        }

        void setItemAt(int value, int index) {
            if (index < 0 || index >= size) {
                cout << "Index out of bound.\n";
                abort();
            }
            NodeType *current = head;
            for (int i = 0; i < index; i++)
                current = current->link;
            current->info = value;
        }


        void deleteFirst() {
            if (size > 0) {//else, may want to give a message or error
                NodeType *toBeDeleted = head;
                head = head->link;
                delete toBeDeleted;
                size--;
            }
        }

        void deleteLast() {
            if (size > 0) {//else, may want to give a message or error
                if (size == 1) {//list has only one item
                    delete head;
                    head = nullptr;
                } else {
                    NodeType *beforeLast = head;
                    while (beforeLast->link->link != nullptr)
                        beforeLast = beforeLast->link;
                    delete beforeLast->link;
                    beforeLast->link = nullptr;
                }
                size--;
            }
        }

        void deleteItemAt(int index) {
            if (index < size) {//else, may want to give a message or error
                if (index == 0)
                    deleteFirst();
                else {
                    NodeType *prev = nullptr, *toDelete = head;
                    for (int i = 0; i < index; i++) {
                        prev = toDelete;
                        toDelete = toDelete->link;
                    }
                    prev->link = toDelete->link; //nullptr also OK for last item
                    delete toDelete;
                    size--;
                }
            }
        }

        void insertItemAt(int value, int index) {
            if (index <= size) {//else, may want to give a message or error
                if (index == 0)
                    insertAtBeginning(value);
                else if (index == size)
                    insertAtEnd(value);
                else {
                    auto *newNode = new NodeType;
                    newNode->info = value;
                    NodeType *prev = head;
                    for (int i = 0; i < index - 1; i++)
                        prev = prev->link;
                    newNode->link = prev->link;
                    prev->link = newNode;
                    size++;
                }
            }
        }

        void printRecursive(NodeType *current) {
            if (current != nullptr) {
                printRecursive(current->link);
                cout << current->info << " ";
            }
        }

        void printReverse() {
            printRecursive(head);
        }

    };


    void main() {
//        LinkedList l1;
//        LinkedList l2;
//        l1.insertAtBeginning(5);
//        l1.insertAtBeginning(9);
//        l1.insertAtBeginning(3);
//        l1.clear();
//        cout << "\nSize L1 : " << l1.getSize() << endl;
//        l2.insertAtBeginning(9);
//        l2.insertAtBeginning(7);
//        cout << "\nSize L2 : " << l2.getSize() << endl;
//        LinkedList list;
//        list.insertAtBeginning(1);
//        list.insertAtEnd(2);
//        list.insertAtBeginning(3);
//        list.print();
//        list.deleteFirst();
//        list.print();
//        list.deleteLast();
//        list.print();
//        list.clear();
// Checkpoint 1
//        list.insertAtBeginning(5);
//        list.insertAtEnd(7);
//        list.insertAtEnd(8);
//        list.insertAtBeginning(4);
//        list.deleteItemAt(3);
//        list.print();
// Checkpoint 2
//        list.insertItemAt(6, 2);
//        list.insertItemAt(3, 0);
//        list.print();
//        list.insertItemAt(9, list.getSize());
//        list.insertItemAt(8, list.getSize() - 1);
//        list.print();
// Checkpoint 3
//        cout << "\nRecursion function:";
//        list.printReverse();
    }
};

#endif //CPLUSPLUS_TUTORIAL_L9_H
