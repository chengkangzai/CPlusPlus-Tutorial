//
// Created by CCK on 2021-03-02.
//

#ifndef CPLUSPLUS_TUTORIAL_L3_H
#define CPLUSPLUS_TUTORIAL_L3_H


#include <iostream>

using namespace std;

class L3 {
public:
    static void main1() {
        int yourAssignment[5] = {1, 4, 8, 12, 16};
        int myAssignment[5];
        //illegal
        //myAssignment = yourAssignment;
        for (int i = 0; i < 5; i++) {
            myAssignment[i] = yourAssignment[i];
            cout << i;
        }
    }

    static void main2() {
        int yourList[5];
        //illegal
        //cin >> yourList;
        for (int i = 0; i < 5; ++i) {
            cin >> yourList[i];
        }
    }

    static void main3() {
        int sudoku[9][9] = {
                {1, 2, 3, 4, 5, 6, 7, 8, 9},
                {2, 3, 4, 5, 6, 7, 8, 9, 1},
                {3, 4, 5, 6, 7, 8, 9, 1, 2},
                {4, 5, 6, 7, 8, 9, 1, 2, 3},
                {5, 6, 7, 8, 9, 1, 2, 3, 4},
                {6, 7, 8, 9, 1, 2, 3, 4, 5},
                {7, 8, 9, 1, 2, 3, 4, 5, 6},
                {8, 9, 1, 2, 3, 4, 5, 6, 7},
                {9, 1, 2, 3, 4, 5, 6, 7, 8},
        };
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cout << " [" << i << "][" << j << "] = " << sudoku[i][j];
            }
            cout << "\n";
        }
    }

    static void main4() {
        int board[4][3] = {
                {2,  3,  1},
                {15, 25, 13},
                {20, 4,  7},
                {11, 18, 14}
        };
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "board[" << i << "]" << "[" << j << "]: " << board[i][j] << endl;
            }
        }
    }

    static void main5() {
        int age = 20;
        cout << "main age is " << age << "\n";
        grow(age);
        cout << "main age is " << age << "\n";
    }

    static void main6() {
        int board[4][3] = {
                {2,  3,  1},
                {15, 25, 13},
                {20, 4,  7},
                {11, 18, 14}
        };
        arrayFunction(board);
    }

    static void program3() {
        int num1, num2;
        char ch;

        num1 = 10;
        num2 = 15;
        ch = 'A';
        cout << "Line 4: Inside main: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << endl;
        funOne(num1, num2, ch);
        cout << "Line 6: After funOne: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << endl;
        funTwo(num2, 25, ch);
        cout << "Line 8: After funTwo: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << endl;
    }


    static void homework() {
        int array[4][5] = {
                {1,  2,  3,  4,  5},
                {10, 9,  8,  7,  6},
                {11, 12, 13, 14, 15},
                {20, 19, 18, 17, 16}
        };
        for (int i = 0; i < 4; ++i) {
            cout << "------------ \n";
            cout << "|";
            for (int j = 0; j < 5; ++j) {
                cout << array[i][j] << "|";
            }
            cout << "\n";
        }
        cout << "------------ \n";
    }

private:
    static void grow(int &age) {
        age = age + 1;
        cout << "Grow age is " << age << "\n";
    }

    static void arrayFunction(int list[4][3]) {
        cout << list[0];
    }


    static void funOne(int a, int &b, char v) {
        int one;
        one = a;
        a++;
        b = b * 2;
        v = 'B';
        cout << "Line 13: Inside funOne: a = " << a << ", b = " << b << ", v = " << v << ", and one = " << one << endl;
    }

    static void funTwo(int &x, int y, char &w) {
        x++;
        y = y * 2;
        w = 'G';
        cout << "Line 17: Inside funTwo: x = " << x << ", y = " << y << ", and w = " << w << endl;
    }

};


#endif //CPLUSPLUS_TUTORIAL_L3_H