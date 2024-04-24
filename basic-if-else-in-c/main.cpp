#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age : "<<endl;
    cin>>age;
    if(age<14){
        cout<<"you can not appear for exam"<<endl;
    
    }
    else if (age==14){
        cout<<"you have to wait one year"<<endl;
        
    }
    else{
        cout<<"you can appear in exam goodluck!!!"<<endl;
    }
    return 0;
}