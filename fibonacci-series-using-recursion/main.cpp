/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main()
{
    int a;
    cout<<"enter a number : "<<endl;
    cin>>a;
    cout<<"the term of fibonnaci series is : "<<fib(a)<<endl;
    
    

    return 0;
}