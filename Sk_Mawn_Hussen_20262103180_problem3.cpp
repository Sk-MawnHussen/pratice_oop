#include <bits/stdc++.h>

using namespace std;

int main() {
    string type;
    int h;

   cin >> type >> h;

    if (h > 10) {
        cout << "Maximum parking duration exceeded." << endl;
    } else {
        int fee = 0;
        if (type == "car") {
            if (h <= 2) {
                fee = 50;
            } else {
                fee = 50 + (h - 2) * 30;
            }
        } else if (type == "bike") {
            if (h <= 2) {
                fee = 30;
            } else {
                fee = 30 + (h - 2) * 20;
            }
        }
        cout << "Total Parking Fee: Tk. " << fee << endl;
    }

    return 0;
}
