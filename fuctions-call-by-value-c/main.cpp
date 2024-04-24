#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp=a;
    a = b;
    b = temp;
}
int main(){
    int x=4,y=5;
    cout<<"the value of x is : "<<x<<" and the values of y is :"<<y<<endl;
    return 0;
}