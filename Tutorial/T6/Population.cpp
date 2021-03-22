//
// Created by CCK on 2021-03-22.
//

#include "Population.h"

double Population::getBirthRate() const {
    return birth / population;
}

double Population::getDeathRate() const {
    return death / population;
}

void Population::main() {
    double birth = 0, death = 0, population = 0;


    while (birth <= 0) {
        cout << " Input Total of birth \n";
        cin >> birth;
    }

    while (death <= 0) {
        cout << " Input Total of death \n";
        cin >> death;
    }
    while (population <= 0) {
        cout << " Input Total of population \n";
        cin >> population;
    }

    Population s = Population(birth, death, population);
    cout << "Birth rate is " << s.getBirthRate() << "\n";
    cout << "Death rate is " << s.getDeathRate() << "\n";


}

Population::Population(double birth, double death, double population) {
    this->birth = birth;
    this->death = death;
    this->population = population;
}
