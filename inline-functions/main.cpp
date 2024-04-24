 #include<iostream>
 using namespace std;
float moneyrecieved(int currmoney,float factor=1.7){
    return currmoney*factor;
}
int main(){
    int money = 100000;
    cout<<"if you have "<<money<<"rs in your account , you will recieve "<<moneyrecieved(money)<<"rs after one year"<<endl;
    cout<<"for VIP if you have money "<<money<<"RS in your bank account, you will recieve money"<<moneyrecieved(money,1.9)<<"after one year";
    return 0;

}