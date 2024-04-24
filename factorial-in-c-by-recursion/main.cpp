/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"the factorial of is : "<<factorial(a)<<endl;
    

    return 0;
}