/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
struct employee
{
  /* data */
  int eId;
  char favChar;
  float salary;
};

int
main ()
{
  struct employee navneet;
  navneet.eId = 1;
  navneet.favChar = 'c';
  navneet.salary = 120000000;
  cout << "The value is " << navneet.eId << endl;
  cout << "The value is " << navneet.favChar << endl;
  cout << "The value is " << navneet.salary << endl;
  return 0;
}
