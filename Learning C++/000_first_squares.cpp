//charvars.cpp
// применение символьных констант

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    //объявление
    int width = 10;
    int end = 32;
    //наименование столбцов
    cout << setw(width) << "j";
    cout << setw(width) <<"j^2";
    //цикл
    for (int j=2 ; j<=end ; j *= 2)
    { cout  << "\n" << setw(width) << j << setw(width) <<j * j;}

    cout << endl;

    return 0;
}