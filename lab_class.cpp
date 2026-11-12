#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string studentname;
    int studentid;
    string studentemail;
    int numcourse;
    double cgpa;
public:
    Student(string studentname,int studentid,string studentemail,int numcourse,double cgpa)
    {
        this->studentname=studentname;
        this->studentid=studentid;
        this->studentemail=studentemail;
        this->numcourse=numcourse;
        this->cgpa=cgpa;

    }

    void display()
    {



        cout<<"student name:"<<studentname<<endl;
        cout<<"student email:"<<studentemail<<endl;
        cout<<"student cgpa:"<<cgpa<<endl;
        cout<<"student id:"<<studentid<<endl;
        cout<<"and number of course:"<<numcourse<<endl;

        cout<<endl;



    }

    Student()

    {


        cout<<"unknown data"<<endl;
        cout<<endl;

    }
    Student(double a)
    {

        cout<<"cgpa"<<a<<endl;

        cout<<endl;
    }
    Student(Student &obj)

    {


        this->studentname=obj.studentname;
        this->studentid=obj.studentid;
        this->studentemail=obj.studentemail;
        this->numcourse=obj.numcourse;
        this->cgpa=obj.cgpa;


        obj.studentname="kabul change name";





    }



};

class Teacher
{
private:
    string teachername;
    int teacherid;
    string teacheremail;
    int numourse;
    string dept;

public:
    Teacher( string teachername,int teacherid,string teacheremail,int numourse,string dept)

    {

        this->teachername=teachername;
        this->teacherid=teacherid;
        this->teacheremail=teacheremail;
        this->numourse=numourse;
        this->dept=dept;


    }

    void display2()
    {




        cout<<"teacher name:"<<teachername<<endl;
        cout<<"teacher email:"<<teacheremail<<endl;
        cout<<"teacher department:"<<dept<<endl;
        cout<<"teacher id:"<<teacherid<<endl;
        cout<<"and number of course:"<<numourse<<endl;

        cout<<endl;


    }

    Teacher(string a,string b,string c)
    {

        cout<<"teacher name:"<<a<<endl;
        cout<<"teacher email:"<<b<<endl;
        cout<<"teacher department:"<<c<<endl;
        cout<<endl;

    }
    Teacher(int a,int b)
    {

        cout<<"teacher id:"<<a<<endl;
        cout<<"and number of course:"<<b<<endl;
        cout<<endl;


    }



};


/* double calculate(int a,int b)
 {
     double sum=a+b;
     cout<<"sum"<<sum<<endl;

     cout<<endl;

     return sum;

 }
 double calculate(int a,int b,int c)
 {

     double mul=a*b*c;
     cout<<"multiply"<<mul<<endl;
     cout<<endl;
     return mul;

 }
 double calculate(int a, double b)
 {
     double div=a/b;
     count<<"divition"<<div<<endl;
     cout<<endl;

 }

 void calculate()
 {

     cout<<"all overloading function"<<endl;

 }*/


int main()
{

   Student student1("rahim",180,"rahimemail",5,4.00);
    student1.display();
   Student student2("kahim",182,"kahimemail",6,4.00);
    student2.display();
    Teacher teacher1("labu",135,"labulove.com",10,"mathematic");
    teacher1.display2();
    Teacher teacher2("mabu",145,"mabulove.com",10,"bangla");
    teacher2.display2();
    Student student3(4.00);
    Student student4();
    Teacher teacher3("maklom","fwhfd","mathematics");
    Teacher techer4(5,10);
    Student newstudent(student1);
    newstudent.display();
    student1.display();


}
