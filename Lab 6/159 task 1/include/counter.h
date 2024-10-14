#ifndef COUNTER_H
#define COUNTER_H
using namespace std;

class counter
{
private:
    int incrementStep;
    int count;
public:
        counter();
        int getCount()const;
        void setIncrementStep(int );

        void increment();
        void resetCount(int );
        counter operator+(const counter& val)const;
        counter operator+=(const counter& val);
        counter operator++();
        counter operator++(int);
        bool operator>(const counter& c)const;
        bool operator<(const counter& c) const;
        bool operator>=(const counter& c) const;
        bool operator<=(const counter& c) const;
        bool operator==(const counter& c) const;
        bool operator!=(const counter& c) const;

        ~counter();


};

#endif // COUNTER_H
