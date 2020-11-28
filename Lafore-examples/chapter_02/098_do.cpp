/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, raind */
#include <time.h>       /* time */
#include <iostream>

using namespace std;

int main ()
{
  int Secret;

  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  //iSecret = rand() % 99999;

  do {
    cout << "\n";
    Secret = rand() % 100;
    //cout << "\n";
    printf ("deploying rootkit...");
    system ("cls");
    //cout << iSecret << "...";
    //system ("cls");
  } while (Secret!=10);

  puts ("finished!");
  return 0;
}