//charvars.cpp
// применение символьных констант

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const unsigned long limit = 4294967295;
    unsigned long x0 = 0;
    unsigned long x1= 1;
    while (x0 < limit/2)
    {
        cout << x1 << " ";
        long sum = x1 + x0;
        x0 = x1;
        x1 = sum;
    }
    cout << x1/x0;
    cout << endl;
    return 0;
}