#include <bits/stdc++.h>

using namespace std;

int main() {
    double balance;
   cin >> balance;

    while (1) {
        double amount;
        char choice;
        cin >> amount >> choice;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }

        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    cout << "Remaining Balance: Tk. " << balance << endl;

    return 0;
}
