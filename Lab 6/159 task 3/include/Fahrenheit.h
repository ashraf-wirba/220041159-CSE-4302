#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

class Fahrenheit
{
private:

    float val;
    public:
        Fahrenheit();
        Fahrenheit(float v);
        void display();
        Celcius operator Fahrenheit();
        Kelvin operator Kelvin();

         ~Fahrenheit();


};

#endif // FAHRENHEIT_H
