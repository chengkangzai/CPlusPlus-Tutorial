#include <iostream>
#include <string>

using namespace std;

int main() {
    string holder;
    cout << "Give me Meter \n";
    try
    {
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
    catch (const std::exception& s)
    {

    }
}
