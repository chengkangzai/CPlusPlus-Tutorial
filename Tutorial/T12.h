//
// Created by Cheng Kang Ching on 10/05/2021.
//

#ifndef CPLUSPLUS_TUTORIAL_T12_H
#define CPLUSPLUS_TUTORIAL_T12_H

#include <iostream>
#include <stack>

using namespace std;

class T12 {
public:
    void padlin() {
        string input;
        cout << "Beep Boop.... Checking " << endl
             << "Please give me some string to check palindrome";
        cin >> input;

        bool isPalindrome = true;
        stack<char> stackHolder;

        for (char c :input) {
            stackHolder.push(c);
        }

        for (auto it = input.begin(); isPalindrome && !stackHolder.empty(); ++it) {
            isPalindrome = (*it == stackHolder.top());
            stackHolder.pop();
        }

        cout << input << "is palindrome ? "
             << (isPalindrome ? "YES" : "NO");
    }

    void parent() {
    }

    bool AreParenthesesBalanced(string exp) {
        stack<char> S;
        for (int i = 0; i < exp.length(); i++) {
            if (exp[i] == '(') {
                S.push(exp[i]);
            } else if (exp[i] == ')') {
                if (S.empty() || !ArePair(S.top(), exp[i])) {
                    return false;
                } else {
                    S.pop();
                }
            }
        }
        return S.empty();
    }

    bool ArePair(char open, char clos) {
        return open == '(' && clos == ')';
    }

    void main() {
        string expression = "(((a+b)*c+d-e)/(f+g)-(h+j)*(k-1))/(m-n)";
        cout << expression << " is ";
        if (AreParenthesesBalanced(expression))
            cout << "Balanced\n";
        else
            cout << "Not Balanced\n";
    }

};


#endif //CPLUSPLUS_TUTORIAL_T12_H
