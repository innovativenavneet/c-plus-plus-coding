/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary =123;
        cout<<"enter id of the employee : ";
        cin>>id;
    
    }
    void getid(void){
        cout<<"the id of this employee is : "<<id<<endl;
        
        
    }
};

int main()
{
/*employee navneet,ehtesham,suri, anand;
navneet.setid();
navneet.getid();*/
employee innovation[5];
for (int i=0; i<5; i++ ) {
innovation[i].setid();
innovation[i].getid();/* code */
}
    return 0;
}