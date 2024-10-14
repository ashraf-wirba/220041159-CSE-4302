#ifndef CELCIUS_H
#define CELCIUS_H


class Celcius
{
private:
    float val;
    public:
        Celcius();
        Celcius(float v);
        void display();
        Fahrenheit operator Fahrenheit()const;
        Kelvin operator Kelvin()const;
        ~Celcius();


};

#endif // CELCIUS_H
