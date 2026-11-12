#include <bits/stdc++.h>

using namespace std;

int main() {
    double mark[5];
    double totalMark = 0;

    for (int i = 0; i < 5; i++) {
        cin >> mark[i];
        totalMark += mark[i];
    }

    double averageMark = totalMark / 5.0;
    string grade;

    if (averageMark >= 80) {
        grade = "A+";
    } else if (averageMark >= 70) {
        grade = "A";
    } else if (averageMark >= 60) {
        grade = "B";
    } else if (averageMark >= 50) {
        grade = "C";
    } else if (averageMark >= 40) {
        grade = "D";
    } else {
        grade = "Fail";
    }

    cout << "Total Marks: " << totalMark << endl;
    cout << "Average Marks: " << averageMark << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
