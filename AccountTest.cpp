  // Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

using namespace std;

int main() 
{
   Account account1{"Jane Green", 50};
   Account account2{"John Blue", -7}; 

   // display initial balance of each object
   cout << "account1: " << account1.getName() << " balance is $"
      << account1.getBalance(); 
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance(); 

   cout << "\n\nEnter deposit amount for account1: "; // prompt
   int depositAmount;
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account1 balance";
   account1.deposit(depositAmount); // add to account1's balance

   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance(); 
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();

   // Withdraw amount for account2
   cout << "\nEnter Withdrawal amount for account1:";
    int withdrawAmount;
    cin >> withdrawAmount; //user input
    cout << "deducting " << withdrawAmount << " to account1 balance";
    account1.withdrawal(withdrawAmount); // remove from account1's balance

   cout << "\n\nEnter deposit amount for account2: "; // prompt
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account2 balance";
   account2.deposit(depositAmount); // add to account2 balance

    // Withdraw amount on Account2
    cout << "\nEnter Withdrawal amount for account1:";
    int withdrawAmount2;
    cin >> withdrawAmount2; //user input
    cout << "deducting " << withdrawAmount2 << " to account1 balance";
    account1.withdrawal(withdrawAmount2); // remove from account1's balance

    // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance(); 
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance() << endl;



} 


