#include "SavingsAccount.h"
#include<iostream>
using namespace std;
SavingsAccount::SavingsAccount(string accName, string addr, double interestRate, double balance): AccountName(accName), address(addr), annualInterestRate(interestRate), currentBalance(balance), minimumBalance(balance) {}
SavingsAccount::SavingsAccount(){}
string SavingsAccount::getAccountName() const { return AccountName; }
void SavingsAccount::setAccountName(const string& accName) { AccountName = accName; }

string SavingsAccount::getAddress() const { return address; }
void SavingsAccount::setAddress(const string& addr) { address = addr; }

double SavingsAccount::getAnnualInterestRate() const { return annualInterestRate; }
void SavingsAccount::setAnnualInterestRate(double interestRate) { annualInterestRate = interestRate; }

double SavingsAccount::getCurrentBalance() const { return currentBalance; }
void SavingsAccount::setCurrentBalance(double balance) { currentBalance = balance; }
void SavingsAccount::deposit(double amount) {
    if (amount > 0) {
        currentBalance += amount;
        if (currentBalance < minimumBalance) {
            minimumBalance = currentBalance;
        }
    } else {
        cout<<" Error Deposit amount must be positive."<<endl;
    }
}

void SavingsAccount::withdraw(double amount) {
    if (amount > 0 && amount <= currentBalance) {
        currentBalance -= amount;
    } else {
        cout<<"Invalid withdrawal amount."<<endl;
    }
}
double SavingsAccount::calculateInterest(int periodInMonths) const {
    double monthlyRate = annualInterestRate / 12 ;
    return (minimumBalance * monthlyRate * periodInMonths)/100;
}

void SavingsAccount::disburseInterest(int periodInMonths) {
    double interest = calculateInterest(periodInMonths);
    deposit(interest);
    minimumBalance = currentBalance;
}


