#include <iostream>

using namespace std;

void swap(int& arr1, int& arr2);

int main()
{
    int a, b, c;
    
    cout << "Enter numbers:\n";
    cin >> a >> b >> c;
    cout << "Initialization complete!\n\n";
    
    cout << "Unsorted list: \n"
    << a << "\n"
    << b << "\n"
    << c << "\n\n";
   
    cout << "Sorting...\n\n";
    if (a < b) swap (a, b);
    if (b < c) swap (b, c);
    if (a < b) swap (a, b);
    
    cout << "Sorted list: \n"
    << a << "\n"
    << b << "\n"
    << c << "\n";
}


void swap(int& arr1, int& arr2)
{
    int temp = arr1;
    arr1 =  arr2;
    arr2 = temp;
}