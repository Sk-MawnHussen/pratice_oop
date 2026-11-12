#include<bits/stdc++.h>
using namespace std;

class Book
{
public:
    string title;
    double price;
    Book()
    {

        cin>>title;
        cin>>price;
        cout<<endl;


    }
    Book(Book &a)
    {


        this->price=a.price;
        this->title=a.title;
        cout<<title<<endl;
        cout<<price<<endl;



    }
    void copy()
    {
        cout<<endl;


        price+=10;
        cout<<title<<endl;
        cout<<price<<endl;

    }



};
int main()
{

    Book original_book;
    Book copy_book(original_book);
    copy_book.copy();
}
