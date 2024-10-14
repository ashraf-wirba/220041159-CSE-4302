#include "counter.h"
#include<iostream>
using namespace std;
counter::counter()
{
    count=0;
    incrementStep=1;
}
int counter::getCount ()const {
    return count;
    }
void counter::setIncrementStep (int step=1) {
    if(getCount()==0){
        if(step>0){
            incrementStep=step;
        }
        else{
            cout<<"No negative values"<<endl;
        }
    }
    else{
        cout<<"Cannot set the increment step"<<endl;
    }
}
void counter::increment () {count+=incrementStep;}
void counter::resetCount(int step=1){
    count=0;
    counter::setIncrementStep(step);
}
 counter counter::operator+(const counter& val)const{
     if(incrementStep==val.incrementStep){
        counter temp;

        temp.count+=getCount();
        return temp;
     }
     else{
        cout<<"increment step is not same"<<endl;
        return *this;
     }

 }
 counter counter::operator+=(const counter& val){
     counter temp=*this;
     if(incrementStep==val.incrementStep){
     temp.count+=val.getCount();
     }
     return temp;
 }
 counter counter::operator ++(){
     counter temp=*this;
     temp.count+=incrementStep;
     count+=incrementStep;
     return temp;
 }
 counter counter::operator++(int){
    counter temp=*this;
    count+=incrementStep;
     return temp;
 }
bool counter::operator>(const counter& c)const{
    return getCount()>c.getCount();
}
bool counter::operator<(const counter& c) const{
    return getCount()<c.getCount();
}
bool counter::operator>=(const counter& c) const{
    return getCount()>=c.getCount();
}
bool counter::operator<=(const counter& c) const{
    return getCount()<=c.getCount();
}
bool counter::operator==(const counter& c) const{
    return getCount()==c.getCount();
}
bool counter::operator!=(const counter& c) const{
    return getCount()!=c.getCount();
}
counter::~counter()
{

}
