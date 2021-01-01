#include <iostream>
using namespace std;

void swap_sorting(int& n1, int& n2);

int main()
{
    int a = 3;
    int b = 6;
    cout << "\n" << a << " "<< b << "\n";
    swap_sorting(a,b);
    cout << "swapping...\n";
    cout << a << " "<< b;
    return 0;
}

void swap_sorting(int& a, int& b)
{
    int temp = a;
    a =  b;
    b = temp;
}