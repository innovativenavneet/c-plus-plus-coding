#include<iostream>
using namespace std;
int main(){
    int marks[] = {23,44,455,66};
    int mathmarks[4];
    mathmarks[1]=27;
    mathmarks[2]=59;
    mathmarks[3]=56;
    cout<<"these are mathmarks by using simple array printing"<<endl;
    
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<"these are marks by using simple array printing"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    for(int i =0;i<=3;i++)
    {
        cout<<"these are the marks by using loop : "<<i<<marks[i]<<endl;
    }
    return 0;
}
