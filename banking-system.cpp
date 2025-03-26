//******************************************************************** */
//Author.....: Andrew Hathaway
//Assignment.: Banking System Project
//Description: This program emulates a simple banking system that allows
//             users to deposit money, withdraw money, check their balance,
//             and exit the system.
//******************************************************************** */

#include <iostream>
using namespace std;

int main() {
    double balance = 0.0; // Initial balance is 0
    int choice;
    double amount;

    while (true) {
        // Display menu
        cout << "======== BANKING SYSTEM ========\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "================================\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: // Deposit Money
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful! New balance: $" << balance << endl;
                } else {
                    cout << "Invalid amount. Deposit must be positive.\n";
                }
                break;

            case 2: // Withdraw Money
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient funds! Withdrawal failed.\n";
                } else {
                    cout << "Invalid amount. Withdrawal must be positive.\n";
                }
                break;

            case 3: // Check Balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4: // Exit
                cout << "Exiting the banking system. Thank you for using our service!\n";
                return 0;

            default:
                cout << "Invalid option! Please choose a valid menu option.\n";
                break;
        }
    }

    return 0;
}
