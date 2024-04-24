#include<iostream>
using namespace std;
//question no. 1
/*class y;
class x{
    int data;
    public:
    void setvalue(int value ){
        data = value;}
        friend void add(x, y);
    };
    class y{
        int num;
         public: 
         void setvalue(int value ){
            num= value;
         }
         friend void add(x, y);
    };
    void add(x o1, y o2){
        cout<<" summing data of x and y is objects gives me "<<o1.data + o2.num;
    }
    int main(){
       x a;
        a.setvalue(3);
        y b;
        b.setvalue(5);
        add(a, b);
    }*/
    class c2;
    class c1{
        int val;
        friend void exchange(c1& , c2&);
        public:
        void indata(int a){
            val =a;
        }
        void display(void){
            cout<< val <<endl;
        }
    };
    class c2{
        int val2;
        friend void exchange(c1& , c2&);
        public:
        void indata(int a){
            val2 =a;
        }
        void display(void){
            cout<<val2<<endl;
        }
    };
    void exchange(c1 & x , c2 &y){
        int temp = x.val;
        x.val= y.val2;
        y.val2=temp;

    
    
}
int main(){
    c1 oc1;
    c2 oc2;
     oc1.indata(34);
     oc2.indata(55);
     exchange(oc1, oc2);
     cout<<"the value after exchanging becomes: ";
     oc1.display();
     cout<<"the value after exchanging becomes: ";
     oc2.display();
return 0;
}

