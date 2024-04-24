/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
        
    }
void setdatabysum(complex o1,complex o2){
    

a=o1.a + o2.a;
b=o1.b+o2.b;
}
void printnumber(){
    cout<<"your comlex no. is : "<<a<<"+i"<<b<<endl;
}
};

int main()
{
complex c1,c2,c3;
c1.setdata(1,2);
c1.printnumber();
c2.setdata(3,4);
c2.printnumber();
c3.setdatabysum(c1,c2);
c3.printnumber();
    return 0;
}