#include<iostream>
using namespace std;
class counter{
private:
    int Count=0;
    int incr=1;
public:
    void setIncrementStep(int x){
        incr=x;
    }
    int getCount(){
        return Count;
    }
    void increment(){
        Count+=incr;
    }
    void resetCount(){
        Count=0;
    }
};
int main(){
    counter c;
    c.setIncrementStep(5);
    cout<<c.getCount()<<endl;
    c.increment();
    cout<<c.getCount()<<endl;
    c.resetCount();
    cout<<c.getCount()<<endl;
}
