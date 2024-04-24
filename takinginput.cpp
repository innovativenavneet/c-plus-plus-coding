//program to get data and display data
#include<iostream>
using namespace std;
class navneet{
    char name[30];
    double age;
    public:
    void getdata(void);
    void display(void);
};

void navneet::getdata(void){
    cout<<"enter name: "<<endl;
    cin >> name;
    cout<<"enter age: "<<setw(4)<<endl;
    cin >> age;
    
}
void navneet::display(void){
    cout<<name<<endl;
    cout<<age<<endl;
}
int main(){
    navneet n;
    n.getdata();
    n.display();
    return 0;
}