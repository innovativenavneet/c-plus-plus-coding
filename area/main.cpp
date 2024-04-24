#include<iostream>
using namespace std;
class A 
{
    int l,b,h,pi,r,aoc,aor,aot;
    public:
    void input()
    {
        cout<<"Enter length:"<<endl;
        cin>>l;
        cout<<"enter breadth"<<endl;
        cin>>b;
        cout<<"enter height"<<endl;
        cin>>h;
        cout<<"enter pi for radius"<<endl;
        cin>>pi;
        cout<<"enter radius in cm"<<endl;
        cin>>r;
        
        
        
    }
    void area()
    {
        aoc=pi*r*r  ;
        aor=l*b  ;
        aot=b*h/2  ;
        
        cout<<"area of circle : "<<aoc<<endl;
        cout<<"area of traingle :"<<aot<<endl;
        cout<<"area of reactangle :"<<aor<<endl;
        
        
    }
};
int main()
{
    A obj;
    obj.input();
    obj.area();
    
return 0;

}