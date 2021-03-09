//
// Created by CCK on 2021-03-08.
//

#ifndef CPLUSPLUS_TUTORIAL_L4_H
#define CPLUSPLUS_TUTORIAL_L4_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class L4 {
public:
    static void handle1() {
        int intbilly[6] = {16, 2, 77, 40, 12071, 51};
        int holder = 0;
        for (int i : intbilly) {
            holder += i;
        }
        cout << "Output : " << holder;
    }

    static void handle2() {
        int input[10];
        for (int i = 0; i < 10; i++) {
            int j = i + 1;
            cout << "Enter the number for " << j << "\n";
            string temp;
            getline(cin, temp);
            input[i] = stoi(temp);
        }
        int max = input[0];
        int min = input[0];
        for (int i = 1; i < 10; i++) {
            if (max > input[i]) {
                max = input[i];
            }
            if (min < input[i]) {
                max = input[i];
            }
        }

        cout << "Min :  " << min << " Max : " << max;
    }

    static void handle3() {
//        char katak[5] = {'K', 'A', 'T', 'A', 'K'};
        char katak[5] = {1, 6, 4, 6, 1};
        string temp1;
        string temp2;
        /**
         * Convert Char to String
         */
        for (int i = 0; i < 5; ++i) {
            temp1 += katak[i];
        }
        /**
         * Reverse the string
         * https://www.educba.com/reverse-string-in-c-plus-plus/
         */
        for (int i = temp1.length() - 1; i >= 0; i--) {
            temp2 += temp1[i];
        }

        if (temp1 == temp2) {
            cout << "Its same !";
        } else {
            cout << "Its not same !";
        }
    }

    static void handle4() {
        char ans[15] = {
                'A', 'C', 'B', 'B', 'D',
                'D', 'C', 'A', 'B', 'A',
                'A', 'A', 'D', 'D', 'C',
        };
        char input[15];

        for (int i = 0; i < 15; ++i) {
            int j = i + 1;
            cout << "Enter Your Answer for " << j << "\n";
            string temp;
            getline(cin, temp);
            input[i] = temp[0];
        }

        int counter = 0;
        for (int i = 0; i < 15; ++i) {
            if (input[i] == ans[i]) {
                counter++;
            }
        }
        cout << "Result : " << counter << "/15";
        if (counter >= 12) {
            cout << "Passed";
        } else {
            cout << "Failed";
        }

    }

    static void handle5() {
        int a[5] = {4, 2, 7, 9, 6};
        cout << "Before Sort! \n";
        for (int i = 0; i < 5; ++i) {
            cout << a[i] << " ";
        }
        cout << "\nAfter Sort\n";
        arrSort(a);
        for (int i = 0; i < 5; ++i) {
            cout << a[i] << " ";
        }
    }


private:
    static string revStr(string basicString) {
        string temp;
        for (int i = basicString.length() - 1; i >= 0; i--) {
            temp += basicString[i];
        }
        return temp;
    }

    static void arrSort(int param[]) {
        sort(param, param + 5);
    }
};


#endif //CPLUSPLUS_TUTORIAL_L4_H
