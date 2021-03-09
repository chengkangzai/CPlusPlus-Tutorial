//
// Created by CCK on 2021-03-09.
//

#ifndef CPLUSPLUS_TUTORIAL_L4_H
#define CPLUSPLUS_TUTORIAL_L4_H

#include "iostream"

using namespace std;

class L4 {
public:
    static void test1() {
        int i = 11;
        int *iPtr;
        iPtr = &i;
        cout << "At address " << iPtr << ", the value " << *iPtr << " is stored.\n";
    }

    static void test2() {
        int x;
        int *p;
        int *q;

        p = q;

        /**
         *  This simply not a proper address
         */
        *p = 56;

        /**
         *  Incompatible integer to pointer conversion assigning to 'int *' from 'int'; take the address with &
         *  Cannot assign the value to the address !
         */
//        p = x;

        *p = *q;

        q = &x;

        /**
         *  Incompatible pointer to integer conversion assigning to 'int' from 'int *'; dereference with *
         *  Cannot assign the pointer to integer !!
         */
//        *p = q;
    }

    static void test3() {
        int i = 1;
        cout << i << "\n";
        increment(&i);
        cout << i << "\n";
    }

    static void test4() {
        string s = "Sunny Day";
        string *str = &s;
        cout << s << "\n";
        cout << str << "\n";
        cout << *str << "\n";

        cout << "The string length is : " << (*str).length() << "\n";
        cout << "The string length is : " << str->length() << "\n";

    }

    static void test5() {
        int *intPtr;
        //add new space
        intPtr = new int;
        //Delete
        delete intPtr;
//        delete[] intPtr;
    }

    static void test6() {
        int n = 1;
        while (n > 0) {
            sArray(n);
            cin >> n;
        }
    }

    static void test7() {
        int n = 1;
        while (n > 0){
            dArray(n);
            cin >> n;
        }

    }


private:

    static void increment(int *p) {
        *p = *p + 1;
    }

    static void sArray(int size) {
        const int MAX = 10000;
        if (size > MAX) {
            cout << "Unprepared for this size\n";
            exit(0);
        }
    }

    static void dArray(int size) {
        int *arr = new int[size];
        //process the array arr
        delete[] arr;
    }




};


#endif //CPLUSPLUS_TUTORIAL_L4_H
