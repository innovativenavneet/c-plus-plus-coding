#include<iostream>
using namespace std;
void main(){
    int *arr;
    int size;
    cout<<"enter the size of the integer array: ";
    cin>>size;
    cout<<"creating an array of size "<<size<<" ";
    arr= new int[size];
    cout<<"dynamic allocation";
    delete arr;
    getch();
}