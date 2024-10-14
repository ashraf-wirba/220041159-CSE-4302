#include "Fahrenheit.h"

Fahrenheit::Fahrenheit()
{
    val=0;
}
Fahrenheit::Fahrenheit(float v){
    val=v;
}
void Fahrenheit::display()const{
    cout<<val<<endl;
}
Celcius Fahrenheit::operator Celcius()const{
    Celcius temp;
    temp.val=((val-32)*5)/9;
    return temp;

}
Kelvin Fahrenheit::operator Kelvin()const{
    Kelvin temp;
    temp.val=(((val-32)*5)/9)+273.15;
    return temp;

}
Fahrenheit::~Fahrenheit()
{
    //dtor
}
