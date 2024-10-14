#ifndef KELVIN_H
#define KELVIN_H


class Kelvin
{
private:

    float val;
    public:
        Kelvin();
        Kelvin(float v);
        void display();
        Fahrenheit operator Fahrenheit();
        Celcius operator Celcius();
    public:

        ~Kelvin();

};

#endif // KELVIN_H
