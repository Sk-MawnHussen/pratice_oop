#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
    string studentid;
    double gpa;
public:
    string name;
    int age;
    string course;

    Student(string a,string b,string c,int ag,double gp)
    {
        name=a;
        studentid=b;
        course=c;
        age=ag;
        gpa=gp;

        cout<<"student "<<name<<" resistered succesfully"<<endl;

    }

    void showinfo()
    {
        cout<<endl;
        cout<<"Student name is "<<name<<endl;
        cout<<"student "<<name<<"age is "<<age<<endl;
        cout<<"student id is "<<studentid<<endl;
        cout<<"student course is "<<course<<endl;
        cout<<"student gpa : "<<gpa<<endl;
        cout<<endl;


    }

    void updategpa(double newgpa)
    {

        cout<<endl;

        if(newgpa<=4 && newgpa>=0)
        {
             gpa=newgpa;

            cout<<name <<" updated student gpa is :"<<newgpa<<endl;
        }
        else
        {
            cout<<"Invalid Gpa"<<endl;
        }
        cout<<endl;


    }
    bool isonhonoursroll()
    {

        return gpa>=3.5;

    }

    void studytime(string subject,int hours)
    {
        cout<<endl;
        cout<<name<<" is studying "<<subject<<" for "<<hours<<" hours"<<endl;
        cout<<endl;
    }



};

int main()
{


    Student alice("Alice johnson","ID:20384774","Computer Science",20,3.8);
    Student bob("Bob mark","ID:448490498","Textile",21,3.2);

    alice.showinfo();
    bob.showinfo();
    alice.studytime("computer science",4);
    bob.studytime("textile",5);

    alice.updategpa(3.79);
    bob.updategpa(3.80);

   cout<<"Is alice on honours list :"<<(alice.isonhonoursroll()?"yes":"No")<<endl;
   cout<<"Is bob on honours list :"<<(bob.isonhonoursroll()?"yes":"No")<<endl;





}

