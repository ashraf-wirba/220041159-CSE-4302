#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include<string>
using namespace std;
class SavingsAccount
{
private:
    string AccountName;
    string address;
    double annualInterestRate;
    double currentBalance;
    double minimumBalance;
public:
    SavingsAccount(string accName, string addr, double interestRate, double balance);
    SavingsAccount();
    string getAccountName() const;
    void setAccountName(const string& accName);

    string getAddress() const;
    void setAddress(const string& addr);

    double getAnnualInterestRate() const;
    void setAnnualInterestRate(double interestRate);

    double getCurrentBalance() const;
    void setCurrentBalance(double balance);

    void deposit(double amount);
    void withdraw(double amount);

    double calculateInterest(int periodInMonths) const;
    void disburseInterest(int periodInMonths);

};

#endif // SAVINGSACCOUNT_H
