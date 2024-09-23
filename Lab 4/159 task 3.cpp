#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
    int AccountNumber;
    string HolderName;
    string AccountType;
    int CurrentBalance;
    const int MinBalance;
    int getAccountNumber(){
        return AccountNumber;
    }
    string getAccountType(){
        return AccountType;
    }
    string getHolderName(){
        return HolderName;
    }
    int getCurrentBalance(){
        return CurrentBalance;
    }
    void setCurrentBalance(int x){
        CurrentBalance=x;
    }
    void setAccountNumber(int x){
        AccountNumber=x;
    }
    void setAccountType(string x){
        AccountType=x;
    }
    void setHolderName(string x){
        HolderName=x;
    }
    const int getMinBalance(){
        return MinBalance;
    }
public:
    BankAccount():MinBalance(100){}
    BankAccount(int num,string name,string type,int balance):MinBalance(100){
        setAccountNumber(num);
        setHolderName(name);
        setAccountType(type);
        setCurrentBalance(balance);
    }
    void Set(int num,string name,string type,int balance){
        setAccountNumber(num);
        setHolderName(name);
        setAccountType(type);
        setCurrentBalance(balance);
    }
    void ShowBalance(){
        cout<<"Current Balance: "<<getCurrentBalance()<<endl;
    }
    void Deposit(int x){
        setCurrentBalance(getCurrentBalance()+x);
    }
    void withdrawal(int x){
        if(x+getMinBalance()>getCurrentBalance()){
            cout<<"Invalid transaction"<<endl;
        }
    }
};
int main(){

}
