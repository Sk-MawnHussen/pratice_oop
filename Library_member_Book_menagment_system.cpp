#include<bits/stdc++.h>
using namespace std;


class Book
{
public:
    int bookid;
    string booktitle;
    string authorname;
    double price;

    Book(int i,string t,string a, double p)

    {
        bookid=i;
        booktitle=t;
        authorname=a;
        price=p;


        cout<<endl;
        cout<<"Book ID     :"<<bookid<<endl;
        cout<<"Book Title :" <<booktitle<<endl;
        cout<<"Author     :" <<authorname<<endl;
        cout<<"Price      :" <<price<<endl;

    }

};

class Member
{
private:
    int memberID;
    string memberName;
    string memberEmail;
    int* borrowedBookID;
    int borrowedBookcount ;
    int capacity;
    double totalFine;
public:
    Member()
    {
        memberID=0;
        memberName="unknown";
        memberEmail="not assigned";
        borrowedBookcount=0;
        totalFine=0;
        cout<<endl;
        cout<<"Member ID     :"<<memberID<<endl;
        cout<<"Member Name   :"<<memberName<<endl;
        cout<<"Member Email  :"<<memberEmail<<endl;
        cout<<"Borrowed book :"<<borrowedBookcount<<endl;
        cout<<"Total Fine    :"<< totalFine<<endl;
    }
    Member(int id,string name)
    {
        memberID=id;
        memberName=name;
        cout<<endl;
        cout<<"Member ID     :"<<memberID<<endl;
        cout<<"Member Name   :"<<memberName<<endl;
        cout<<endl;
    }
    Member(int id,string name,string email)
    {

        memberID=id;
        memberName=name;
        memberEmail=email;
        cout<<endl;
        cout<<"Member ID     :"<<memberID<<endl;
        cout<<"Member Name   :"<<memberName<<endl;
        cout<<"Member Email  :"<<memberEmail<<endl;

        cout<<endl;
    }
    Member( Member &c)
    {
        memberID=c.memberID;
        memberName=c.memberName;
        cout<<endl;
        cout<<"Member ID     :"<<memberID<<endl;
        cout<<"Member Name   :"<<memberName<<endl;
        cout<<endl;
    }

    Member(Member &&c)
    {
       memberID=c.memberID;
        memberName=c.memberName;
        cout<<endl;
        cout<<"Member ID     :"<<memberID<<endl;
        cout<<"Member Name   :"<<memberName<<endl;
        cout<<endl;
    }



};

int main()
{
    cout<<"========================================"<<endl<<"Library Member and Book Managment System"<<endl<<"========================================"<<endl;

    cout<<endl<<"===1.Class & obj Creation Successful==="<<endl;
    cout<<endl<<"=== Defualt Construction ==="<<endl;
    Member member1;
    cout<<endl;
    cout<<endl<<"=== Parameterized Construction ==="<<endl;

    Member member2(101,"Rahim Ahmed");


    cout<<endl<<"=== Construction Overloading ==="<<endl;

    Member member3(102,"Karim Hasan","karim@gmail.com");

    cout<<endl<<"=== Default Obj Copying ==="<<endl;

    cout<<endl<<"Original Book"<<endl;

    Book book1(501,"programing","mawn",545.00);

     cout<<endl<<"=== User defined Copy constructor ==="<<endl;
  cout<<endl<<"Original member"<<endl;
 Member member4(101,"rahim ahmed");
   cout<<endl<<"copied member"<<endl;
 Member member5=member4;
  cout<<endl<<"moved member"<<endl;
 Member member6=move(member5);





}

