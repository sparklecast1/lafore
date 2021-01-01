#include <iostream>
using namespace std;

int main()
{
     int n, absvalue;
     cout << "\nEnter a value: (int)\n";
     cin >> n; 
     absvalue = n < 0 ? -n: n;
     cout << "The absvalue is " << absvalue << endl;
}