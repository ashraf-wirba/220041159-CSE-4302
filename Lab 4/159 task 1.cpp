#include<iostream>
using namespace std;
class Calculator{
private:
    int value;
    int get(){
        return value;
    }
    void Set(int x){
        value=x;
    }
public:

    Calculator():value(0)
    {}
    Calculator(int x){
        Set(x);
    }
    void add(int x){
        Set(get()+x);
    }
    void subtract(int x){
        Set(get()-x);
    }
    void multiply(int x){
        Set(get()*x);
    }
    int divideBy(int x){
        int temp;
        if(x==0){
            cout<<"Invalid arithmetic operation."<<endl;
        }
        else{
                temp=get();
            Set(get()/x);
            return temp%x;
        }
    }
    void Clear(){Set(0);}
    void Display(){
        cout<<"Calculator value: "<<get()<<endl;
    }
    ~Calculator(){
        cout<<get()<<endl<<"Destructor of Calculator object is called"<<endl;
    }
};
int main(){
     Calculator cal;
     cal.add(10);
     cal.Display();
     cal.add(7);
     cal.Display();
     cal.multiply(31);
     cal.Display();
     cal.subtract(42);
     cal.Display();
     cal.divideBy(7);
     cal.Display();
     cal.divideBy(0);
     cal.Display();
     cal.add(3);
     cal.Display();
     cal.Clear();
     cal.Display();

     return 0;
}
