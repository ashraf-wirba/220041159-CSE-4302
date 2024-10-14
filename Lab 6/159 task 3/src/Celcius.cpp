#include "Celcius.h"

Celcius::Celcius()
{
    val=0;
}
Celcius::Celcius(float v){
    val=v;
}
void Celcius::display()const{
    cout<<val<<endl;
}
Fahrenheit Celcius::operator Fahrenheit()const{
    Fahrenheit temp;
    temp.val=val*(9/5)+32;
    return temp;

}
Kelvin Celcius::operator Kelvin()const{
    Kelvin temp;
    temp.val=val+273.15;
    return temp;

}
Celcius::~Celcius()
{
    //dtor
}
