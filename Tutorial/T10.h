//
// Created by Cheng Kang Ching on 26/04/2021.
//

#ifndef CPLUSPLUS_TUTORIAL_T10_H
#define CPLUSPLUS_TUTORIAL_T10_H

// CPP program to reverse a string using stack
#include <iostream>

using namespace std;


class T10 {
public:

    /**
     * Erwin
     * A structure to represent a stack
     */
    class Stack {
    public:
        int top;
        unsigned capacity;
        char *array;
    };

    /**
     * Erwin 
     * function to create a stack of given capacity. It initializes size of stack as 0
     * @param capacity
     * @return
     */
    Stack *createStack(unsigned capacity) {
        Stack *stack = new Stack();
        stack->capacity = capacity;
        stack->top = -1;
        stack->array = new char[(stack->capacity * sizeof(char))];
        return stack;
    }

    /**
     * Kwan Kian Peng
     * Stack is full when top is equal to the last index
     * @param stack
     * @return
     */
    int isFull(Stack *stack) {
        return stack->top == stack->capacity - 1;
    }

    /**
     * Chan Chin Wei
     * Stack is empty when top is equal to -1
     * @param stack
     * @return
     */
    int isEmpty(Stack *stack) {
        return stack->top == -1;
    }

    /**
     * Kuan Tzu Cheng
     * Function to add an item to stack.
     * It increases top by 1
     * @param stack
     * @param item
     */
    void push(Stack *stack, char item) {
        if (isFull(stack))
            return;
        stack->array[++stack->top] = item;
    }

    /**
    * Ivy Ling
     * Function to remove an item from stack.
     * It decreases top by 1
     * @param stack
     * @return
     */
    char pop(Stack *stack) {
        if (isEmpty(stack))
            return -1;
        return stack->array[stack->top--];
    }

    /**
     * Ching Cheng Kang
     * A stack based function to reverse a string
     * @param str
     */
    void reverse(char str[]) {
        // Create a stack of capacity equal to length of string
        int n = strlen(str);
        Stack *stack = createStack(n);

        // Push all characters of string to stack
        int i;
        for (i = 0; i < n; i++)
            push(stack, str[i]);

        // Pop all characters of string and put them back to str
        for (i = 0; i < n; i++)
            str[i] = pop(stack);
    }

    /**
     * Ching Cheng Kang
     * @return
     */
    int main() {
        char str[] = "";
        cout << "Input String that you wanted to reverse";
        cin >> str;

        reverse(str);
        cout << "Reversed string is " << str;

        return 0;
    }
};


#endif //CPLUSPLUS_TUTORIAL_T10_H
