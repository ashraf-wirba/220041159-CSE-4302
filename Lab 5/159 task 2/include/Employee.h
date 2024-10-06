#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;
using namespace std;
struct dateOfBirth{
    int day;
    string month;
    int year;
};
class Employee
{
private:
    string Name;
    dateOfBirth dob;
    int salary;
    public:
        string getName() const;
        void setName(string n);
        dateOfBirth getDob() const;
        void setDob(int d,string m,int y) ;
        int getSalary() const;
        void setSalary(int s);
        void setInfo() ;
        void getInfo() const;
        Employee();
        ~Employee();




};

#endif // EMPLOYEE_H
