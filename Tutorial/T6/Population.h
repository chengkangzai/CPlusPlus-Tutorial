//
// Created by CCK on 2021-03-22.
//

#ifndef CPLUSPLUS_TUTORIAL_POPULATION_H
#define CPLUSPLUS_TUTORIAL_POPULATION_H

#include <iostream>
#include <iomanip>

using namespace std;

class Population {
private:
    double birth = 0;
    double death = 0;
    double population = 0;

    double getBirthRate() const;

    double getDeathRate() const;

public:

    Population(double birth, double death, double population);

    static void main();
};


#endif //CPLUSPLUS_TUTORIAL_POPULATION_H
