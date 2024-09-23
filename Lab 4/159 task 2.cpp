#include<iostream>
#include<string>
using namespace std;
class Flight{
private:
    int flightNumber;
    string Destination;
    float Distance;
    float MaxFuelCapacity;
    int CalFuel(){
        if(Distance<=1000)
            return 500;
        else if(Distance<=2000)
            return 1100;
        else return 2200;
    }
    float get_dist(){
        return Distance;
    }
    void Set_dist(float x){
        Distance=x;
    }
    string get_dest(){
        return Destination;
    }
     void Set_dest(string x){
        Destination=x;
    }
    void Set_FlghtNo(int x){
        flightNumber=x;
    }
    int get_FlightNo(){
        return flightNumber;
    }

    float get_Maxfuel(){
        return MaxFuelCapacity;
    }
    void Set_Maxfuel(float x){
        MaxFuelCapacity=x;
    }
public:
    void FeedInfo(){
        int x;
        float y;
        string z;
        cout<<"Enter flight number"<<endl;
        cin>>x;
        Set_FlghtNo(x);
        cout<<"Enter Destination"<<endl;
        cin>>z;
        Set_dest(z);
        cout<<"Enter Distance"<<endl;
        cin>>y;
        Set_dist(y);
        cout<<"Enter max fuel capacity"<<endl;
        cin>>y;
        Set_Maxfuel(y);
    }
    void ShowInfo(){
        cout<<"flight number: "<<get_FlightNo()<<endl;
        cout<<"Destination: "<<get_dest()<<endl;
        cout<<"Distance: "<<get_dist()<<endl;
        cout<<"max fuel capacity: "<<get_Maxfuel()<<endl;
        if(CalFuel()>get_Maxfuel()){
            cout<<"Not sufficient fuel capacity for this flight "<<endl;
        }
        else{
            cout<<"Fuel capacity is fit for this flight distance"<<endl;
        }
    }
    Flight(): flightNumber(0),Destination("Non"),Distance(0),MaxFuelCapacity(0){}
    ~Flight(){}
};
int main(){
    Flight fl;
    fl.FeedInfo();
    fl.ShowInfo();
}
