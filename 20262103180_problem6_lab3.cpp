#include<bits/stdc++.h>
using namespace std;
class Student
{
private:

    string name;
    int rollno;
    int mark;

public:
    Student(string a,int b,int c)
    {

        name=a;
        rollno=b;
        mark=c;

        cout<<"Original -> Name :"<<name<<" | Roll :"<<rollno<<" | Marks :"<<mark<<endl;
    }

    Student(const Student &s2)
    {
        name=s2.name;
        rollno=s2.rollno;
        mark=s2.mark;

    }
    void setmark(int m)
    {

        if (100>=m>=0)
        {
            mark=m;
        }
        else
        {
            cout<<"Invalid Marks"<<endl;
        }


    }
    void display(){

 cout<<"Copy -> Name :"<<name<<" | Roll :"<<rollno<<" | Marks :"<<mark<<endl;
    }
};
int main(){
 Student s1("Ali",5,88);
 Student s2(s1);
 s2.setmark(95);
 s2.display();


}
