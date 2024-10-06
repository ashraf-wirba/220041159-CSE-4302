#include <iostream>
#include<string>
#include "SavingsAccount.h"
using namespace std;
void EditInformationByKeyboard(SavingsAccount *account,int i) {
    string accountName, address;
    double annualInterestRate, currentBalance;

    cout << "Enter Account Name: ";
    getline(cin, accountName);
    account[i].setAccountName(accountName);
    cout << "Enter Address : ";
    getline(cin, address);
    account[i].setAddress(address);
    cout << "Enter Annual Interest Rate : ";
    cin >> annualInterestRate;
    account[i].setAnnualInterestRate(annualInterestRate);

    cout << "Enter Current Balance: ";
    cin >> currentBalance;
    account[i].setCurrentBalance(currentBalance);

    cin.ignore();
}

void generateInformationRandom(SavingsAccount& account) {

    string randomAccountName="john Marry";
    string randomAddress="Ngonbe, Manfe";
    double interest=1.2;
    double RandomBalance=rand()%49000+1000;
    account.setAccountName(randomAccountName);
    account.setAddress(randomAddress);
    account.setAnnualInterestRate(interest);
    account.setCurrentBalance(RandomBalance);
}
void ShowInterestAll(SavingsAccount *account,int n) {
    string confirm;
    for(int i=0;i<n;i++){
        double interest = account[i].calculateInterest(12);
        cout << "Account Name: " << account[i].getAccountName()
                  << " - Calculated Interest: " << interest << endl;
    }
    cout << "Do you want to disburse interest to all accounts? (yes/no): ";
    cin >> confirm;

    if (confirm == "yes") {
       for(int i=0;i<n;i++){
       account[i].disburseInterest(12);
       }
    }
}
void ShowAllAlphabetically(SavingsAccount *account,int n){
    SavingsAccount temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(account[i].getAccountName()>account[j].getAccountName()){
                temp=account[i];
                account[i]=account[j];
                account[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<"Account name: "<<account[i].getAccountName()<<"  current balance: "<<account[i].getCurrentBalance()<<endl;
    }
}
int main()
{
    int n=2;
    SavingsAccount account[100];
    for(int i=0;i<n;i++){
        EditInformationByKeyboard(account,i);
    }
    ShowInterestAll(account,n);
    ShowAllAlphabetically(account,n);
    return 0;
}
