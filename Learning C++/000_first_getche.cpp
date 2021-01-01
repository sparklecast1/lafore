#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int chcount = 0;
    int wdcount = 1;
    char gotch = 'a';
    char restart;
    
    do
    {
        gotch = 'a';
        cout << "Enter a string: ";
        while (gotch != '\r')
        {
            // cout << endl;
            gotch = getche();
            if (gotch == ' ')
                wdcount++;
            else
                chcount++;
        }
        cout << "\n Word count: " << wdcount << endl;
        cout << "\n Char count: " << (chcount-1) << endl;
        cout << "\n Repeat? (y/n): ";
        cin >> restart;
    } while (restart != 'n');
    system("cls");
    exit(0);
}