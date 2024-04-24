/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
double volume(double r, int h){
    return (3.14*r*r*h);
}
int volume(int a){
    return (a*a*a);
}
int volume(int l,int b,int h){
    return (l * b* h);
}
int main()
{
    cout<<"sum of 3 + 4 is : "<<sum(3,4)<<endl;
    cout<<"sum of 3+4+7 is : "<<sum(3,4,7)<<endl;
    cout<<"volume of cylinder of r=3 h=5 is : "<<volume(3,5)<<endl;
    cout<<"volume of cube is : "<<volume(7)<<endl;
    cout<<"volume of rectangle is : "<<volume(4 , 8, 9)<<endl;
    return 0;
}