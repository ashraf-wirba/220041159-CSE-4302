#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;


    void normalize() {
        if (second >= 60) {
            minute += second / 60;
            second %= 60;
        }
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 24) {
            hour %= 24;
        }
    }

public:

    Time(int h = 0, int m = 0, int s = 0) {
        reset(h, m, s);
    }


    int hours() {
        return hour;
    }


    int minutes() {
        return minute;
    }


    int seconds() {
        return second;
    }


    void reset(int h, int m, int s) {
        hour = h % 24;
        minute = m % 60;
        second = s % 60;
        normalize();
    }


    void advance(int h, int m, int s) {
        hour += h;
        minute += m;
        second += s;
        normalize();
    }


    void print() {
        cout << "Current time: "
             << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }
};

int main() {
    Time time(12, 30, 45);
    time.print();

    time.advance(1, 40, 30);
    time.print();

    time.reset(23, 59, 59);
    time.print();

    time.advance(0, 0, 2);
    time.print();

    return 0;
}

