#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
   (cin >> n);

   int prices[5];
    double totalPrice = 0.0;

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
        totalPrice += prices[i];
    }

    double discountAmount = 0.0;
    if (totalPrice >= 500.0) {
        discountAmount = totalPrice * 0.10;
    }

    double finalAmount = totalPrice - discountAmount;


    cout << "Total Price: Tk. " << totalPrice << endl;
    cout << "Discount Amount: Tk. " << discountAmount << endl;
    cout << "Final Amount: Tk. " << finalAmount << endl;

    return 0;
}
