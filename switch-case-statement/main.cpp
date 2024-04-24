#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age : "<<endl;
    cin>>age;
    switch(age)
    {
        case 18: 
        cout<<"your age is 18"<<endl;
        break;
        case 20:
        cout<<"your age is 20"<<endl;
        break;
        default:
        cout<<"no special cases"<<endl;
        break;
    }
    cout<<"done with the switch case"<<endl;
        
    
    
    return 0;
}