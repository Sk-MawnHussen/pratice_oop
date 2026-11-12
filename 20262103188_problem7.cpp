#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    string id;
    double marks;
    string getGrade() {
        if (marks >= 80) return "A+";
        else if (marks >= 70) return "A";
        else if (marks >= 60) return "B";
        else if (marks >= 50) return "C";
        else if (marks >= 40) return "D";
        else return "Fail";
    }



    void display() {
        cout << name << endl;
        cout << id << endl;
        cout << marks << endl;
        cout << getGrade() << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Student s[100];


    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].id >> s[i].marks;
    }


    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    return 0;
}
