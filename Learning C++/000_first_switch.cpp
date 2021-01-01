#include <iostream>
#include <conio.h> // для getche()
using namespace std;

int main()
{
    char toSwitch;
    cout << "Choose switch q, w or e. ";
    cout << "(Press Enter to exit)";
    toSwitch = 'a';

    while (toSwitch != '\r')
    {
        toSwitch = getch();
        switch (toSwitch)
        {
        case 'q': cout << "\n q" ; break ;
        case 'w': cout << "\n w" ; break ;
        case 'e': cout << "\n e" ; break ;
        default: cout << "\n please, try again";
        }
    }
    return 0;
}