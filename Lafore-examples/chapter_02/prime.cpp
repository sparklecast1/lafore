//charvars.cpp
// применение символьных констант

#include <iostream>
#include <process.h>

using namespace std;

int main() 
{
    unsigned long n, j;
    char answer;

    do
    {
    cout << "Enter a number: ";
    cin >> n;
        for (j=2; j <= n/2; j++)
            if (n%j == 0)
                {
                cout << n << " isn`t a prime number (a divider is " << j << ")." << endl;
                cout << "Check another number?\n";
                cin >> answer;
                }
            else
                {
                cout << n << " is a prime number.\n"; 
                cout << "Check another number?\n";
                cin >> answer;
                }
    } while (answer != 'n');
    exit(0);
}