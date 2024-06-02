// Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.
//Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.

#include <iostream>

using namespace std;

int main() {
    int account1_balance = 1000;
    int account2_balance = 1500;
    int account3_balance = 2000;
    
    int choice, account;
    
    cout << "Welcome to the ATM!" << endl;
    
    while (true) {
        cout << "Enter your account number (1, 2, or 3): ";
        cin >> account;
        
        if (account < 1 || account > 3) {
            cout << "Invalid account number. Please try again." << endl;
            continue;
        }
        
        cout << "ATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                if (account == 1)
                    cout << "Your balance is: $" << account1_balance << endl;
                else if (account == 2)
                    cout << "Your balance is: $" << account2_balance << endl;
                else
                    cout << "Your balance is: $" << account3_balance << endl;
                break;
                
            case 2:
                int depositAmount;
                cout << "Enter the amount to deposit: $";
                cin >> depositAmount;
                
                if (account == 1)
                    account1_balance += depositAmount;
                else if (account == 2)
                    account2_balance += depositAmount;
                else
                    account3_balance += depositAmount;
                
                cout << "Deposit successful. Your new balance is: $";
                
                if (account == 1)
                    cout << account1_balance << endl;
                else if (account == 2)
                    cout << account2_balance << endl;
                else
                    cout << account3_balance << endl;
                break;
                
            case 3:
                int withdrawAmount;
                cout << "Enter the amount to withdraw: $";
                cin >> withdrawAmount;
                
                if ((account == 1 && withdrawAmount <= account1_balance) ||
                    (account == 2 && withdrawAmount <= account2_balance) ||
                    (account == 3 && withdrawAmount <= account3_balance)) {
                    if (account == 1)
                        account1_balance -= withdrawAmount;
                    else if (account == 2)
                        account2_balance -= withdrawAmount;
                    else
                        account3_balance -= withdrawAmount;
                    
                    cout << "Withdrawal successful. Your new balance is: $";
                    
                    if (account == 1)
                        cout << account1_balance << endl;
                    else if (account == 2)
                        cout << account2_balance << endl;
                    else
                        cout << account3_balance << endl;
                } else {
                    cout << "Insufficient funds. Your balance is: $";
                    
                    if (account == 1)
                        cout << account1_balance << endl;
                    else if (account == 2)
                        cout << account2_balance << endl;
                    else
                        cout << account3_balance << endl;
                }
                break;
                
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
    
    return 0;
}