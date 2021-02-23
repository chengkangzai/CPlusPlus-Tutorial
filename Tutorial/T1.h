//
// Created by CCK on 2021-02-23.
//

#ifndef CPLUSPLUS_TUTORIAL_T1_H
#define CPLUSPLUS_TUTORIAL_T1_H



#include <iostream>
#include <string>

using namespace std;

class T1 {
public:
    static void handle() {
        string holder;
        cout << "Give me Meter \n";
        try {
            getline(cin, holder);
            const auto height = stod(holder);
            const auto cm = height * 100;
            const auto inch = cm / 2.54;
            const auto foot = inch / 12;
            cout << "Inch :" << inch << "\n";
            cout << "Foot :" << foot << "\n";
            cout << "Inch : " << round(inch) << " Food : " << round(foot);
            cout << round(foot);

        }
        catch (const std::exception &s) {

        }
    }
};



#endif //CPLUSPLUS_TUTORIAL_T1_H
