#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int* b = &a;
    cout<<"address of b is : "<<b<<endl;
    cout<<"value of b is : "<<*b<<endl;
    
    return 0;
}