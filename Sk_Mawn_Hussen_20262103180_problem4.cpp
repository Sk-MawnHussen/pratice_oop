#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long totalSteps = 0;
    int count10k = 0;

    for (int i = 0; i < n; i++) {
        long long steps;
        cin >> steps;
        totalSteps += steps;
        if (steps >= 10000) {
            count10k++;
        }
    }

    double averageSteps =  (double)totalSteps / n;

    string status;
    if (averageSteps >= 10000) {
        status = "Highly Active";
    } else if (averageSteps >= 7000) {
        status = "Moderately Active";
    } else {
        status = "Needs Improvement";
    }

    cout << "Total Steps: " << totalSteps << endl;
    cout << "Average Steps: " << averageSteps << endl;
    cout << "Days with >= 10000 steps: " << count10k << endl;
    cout << "Activity Status: " << status << endl;

    return 0;
}
