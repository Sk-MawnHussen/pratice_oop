#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name, id;
    double marks[5], attendance, avg;
    bool eligible;
};

int main() {
    int n;
    cin >> n;

    Student s[100];
    int best = -1;

    for(int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].id;
        double sum = 0;
        bool failed = false;

        for(int j = 0; j < 5; j++) {
            cin >> s[i].marks[j];
            sum += s[i].marks[j];
            if(s[i].marks[j] < 40) failed = true;
        }
        cin >> s[i].attendance;

        s[i].avg = sum / 5.0;

        if(s[i].avg >= 75.0 && s[i].attendance >= 80.0 && !failed) {
            s[i].eligible = true;
            if(best == -1 || s[i].avg > s[best].avg) {
                best = i;
            }
        } else {
            s[i].eligible = false;
        }
    }

    if(best == -1) {
        cout << "No eligible student\n";
    } else {
        cout << s[best].name << endl;
        cout << s[best].id << endl;
        cout << s[best].avg << endl;
        cout << s[best].attendance << endl;
        cout << "Scholarship Awarded\n";
    }

    return 0;
}
