#include <iostream>
using namespace std;
int main() {

    int balance, deposit, withdrawal;
    cout<<"Enter the Initial Balance: ";
    cin>>balance;

    cout<<"Enter the Deposit Amount: ";
    cin>>deposit;

    cout<<"Enter the Withdrawal Amount: ";
    cin>>withdrawal;

    balance += deposit;
    cout<<"Balance after Deposit: "<<balance<<endl;

    balance -= withdrawal;
    cout<<"Balance after Withdrawal: "<<balance;
    
    return 0;
}