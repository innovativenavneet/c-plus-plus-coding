/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class employee
{
  int id;
  static int count;
public:
  void setdata (void)
  {
    cout << "enter employee id :  " << endl;
    cin >> id;
    count++;
  }
  void getdata (void)
  {
    cout << "the id of this employee is: " << id << endl <<
      "and this is employee number " << count << endl;


  }

};

int
  employee::count = 1000;

int
main ()
{
  employee
    navneet,
    pratik,
    surendra;
  //count is static data member of class employee
  /* navneet.id =1;
     navneet.count=1; */
  navneet.setdata ();
  navneet.getdata ();
  pratik.setdata ();
  pratik.getdata ();
  surendra.setdata ();
  surendra.getdata ();

  return 0;
}
