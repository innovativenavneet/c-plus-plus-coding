#include<iostream>
using namespace std;
int main()
{
    int array []={24,37,57,48};
    int*a = array;
    cout <<"value of elements in array : "<< *(a)<<endl;
    cout <<"value of elements in array : "<< *(a+1)<<endl;
    cout <<"value of elements in array : "<< *(a+2)<<endl;
    cout <<"value of elements in array : "<< *(a+3)<<endl;
    return 0;
}