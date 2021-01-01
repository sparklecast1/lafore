#include <iostream>
using namespace std;

int main()
{
     int x = 2;
     int y = 2;

     if ( !(x%2) && !(y%2) )
     {
        cout << "\ntrue\n" << endl;
        system("pause");
     }
     else 
     {
        cout << "\nfalse\n" << endl;
        system("pause");
     }
     return 0;
}