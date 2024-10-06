#include "Employee.h"
#include<string>
#include<iostream>
using namespace std;
        string Employee::getName() const{return Name;}
        void Employee::setName(string n){
            if(n.size()>2)
              Name=n;
            else
                Name="John Doe";
            }
        dateOfBirth Employee::getDob() const{return dob;}
        void Employee::setDob(int d,string m,int y){
            if(y-2024>18){
            dob.day=d;
            dob.month=m;
            dob.year=y;
            }
            else{
                dob.day=1;
                dob.month="January";
                dob.year=2002;
            }
        }
        int Employee::getSalary() const{return salary;}
        void Employee::setSalary(int s){
            if(s>=10000&&s<=100000)
                salary=s;
            else
                salary=1000;
        }
        void Employee::setInfo(){
            string n,m;
            int s,d,y;
            cout<<"Enter name: ";
            cin>>n;
            setName(n);
            cout<<"Enter date of birth. day, month and year";
            cin>>d>>m>>y;
            setDob(d,m,y);
            cout<<"Enter salary";
            cin>>s;
            setSalary(s);
        }
        void Employee::getInfo() const{
            dateOfBirth d=getDob();
            cout<<"Name: "<<getName()<<endl;
            cout<<"Date of birth: "<<d.day<<" "<<d.month<<" "<<d.year<<endl;
            cout<<"salary: "<<getSalary();
        }

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}
