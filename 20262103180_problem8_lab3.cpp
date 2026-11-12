#include <bits/stdc++.h>

using namespace std;

class Patient
{
private:
    string name;
    int age;
    string disease;

public:

    Patient()
    {
        name = "Unknown";
        age = 0;
        disease = "None";
    }


    Patient(string n, int a, string d)
    {
        name=n;
        disease=d;
        setAge(a);

    }

    Patient(const Patient &other)
    {
        name = other.name;
        age = other.age;
        disease = other.disease;
    }

    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a >= 0 && a <= 120)
        {
            age = a;
        }
        else
        {
            cout << "Invalid age!" << endl;
        }
    }

    void setDisease(string d)
    {
        disease = d;
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    string getDisease() const
    {
        return disease;
    }

    void display() const
    {
        cout << "Name : " << name << " | Age : " << age << " | Disease : " << disease << endl;
    }
};

int main()
{

    Patient p1;
    p1.display();


    Patient p2("Zara", 30, "Flu");
    p2.display();

    Patient p3(p2);
    p3.setDisease("Fever");
    p3.display();

    return 0;
}
