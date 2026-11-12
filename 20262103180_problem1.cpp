#include<bits/stdc++.h>
using namespace std;
class Student
{

private:
    string name;
    double CGPA;

public:
    Student(string a,double b)
    {

        name=a;
        CGPA=b;


    }
    void setter(double a)
    {

        if (0<=a<=4)
        {
            CGPA =a;
        }
        else cout<<"Invalid CGPA"<<endl;
    }
    void display()
    {

        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<CGPA<<endl;


    }




};

int main (){

 Student s("Alice",3.75);

 s.setter(3.68);

 s.display();

 return 0;

}

