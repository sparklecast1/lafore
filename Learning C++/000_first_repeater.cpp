//charvars.cpp
// применение символьных констант

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    char answer;
    do
    {
        cout << "text1\n";
        cout << "repeat? (y/n):";
        cin >> answer;
    } while (answer != 'n');
    return 0;
}