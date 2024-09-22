#include <iostream>
#include <string>
using namespace std;

class Temperature {
private:
    float value;
    string unit;

public:

    void Assign(float x, const string& un) {
        unit = un;
        if (unit == "Celsius") {
            if (x < -273.15) {
                cout << "Invalid temperature value" << endl;
            } else {
                value = x;
            }
        } else if (unit == "Kelvin") {
            if (x < 0) {
                cout << "Invalid temperature value" << endl;
            } else {
                value = x;
            }
        } else if (unit == "Fahrenheit") {
            if (x < -459.67) {
                cout << "Invalid temperature value" << endl;
            } else {
                value = x;
            }
        } else {
            cout << "Invalid unit. Please use 'Celsius', 'Fahrenheit', or 'Kelvin'." << endl;
        }
    }


    float Convert(const string& targetUnit) {
        float celtemp;


        if (unit == "Celsius") {
            celtemp = value;
        } else if (unit == "Fahrenheit") {
            celtemp = (5 * (value - 32)) / 9.0;
        } else if (unit == "Kelvin") {
            celtemp = value - 273.15;
        } else {
            throw invalid_argument("Invalid unit for conversion.");
        }


        if (targetUnit == "Celsius") {
            return celtemp;
        } else if (targetUnit == "Kelvin") {
            return celtemp + 273.15;
        } else if (targetUnit == "Fahrenheit") {
            return celtemp * 9 / 5 + 32.0;
        } else {
            throw invalid_argument("Invalid target unit.");
        }
    }


    void print() {
        cout << "The temperature is " << value << " " << unit << "." << endl;
    }
};

int main() {
    Temperature temp;


    temp.Assign(25, "Celsius");
    temp.print();


    float tempInFahrenheit = temp.Convert("Fahrenheit");
    cout << "Converted temperature: " << tempInFahrenheit << " Fahrenheit." << endl;


    temp.Assign(-500, "Celsius");


    temp.Assign(300, "Kelvin");
    temp.print();


    float tempInCelsius = temp.Convert("Celsius");
    cout << "Converted temperature: " << tempInCelsius << " Celsius." << endl;

    return 0;
}
