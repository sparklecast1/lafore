#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    const unsigned char WHITE=219;
    const unsigned char GREY=176;
    unsigned char ch;

    for (int count=0; count < 100 ; count++)
    {
        ch = WHITE;
        for (int j=2; j<count; j++)
        if (count%j == 0)
        {
            ch = GREY;
            break;
        }
        cout << setw(4) << count << " " << ch << "\t";
    }
    getch();
    return 0;
}