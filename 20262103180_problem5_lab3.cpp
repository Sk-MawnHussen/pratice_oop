#include<bits/stdc++.h>
using namespace std;
class Product
{
private:
    string name;
    int quantity;
    double price;
    double totalvalue;

public:
    Product()
    {

        cout<<"Product : N/a  | Qty :0  Price : 0.00 | Total :0.00"<<endl;

    }
    Product(string n,int q,double p)
    {
        name=n;
        quantity=q;
        price=p;
        totalvalue=quantity*price;
    }

    void setter1(int a)
    {

        if(a>0)
        {

            quantity=a;
        }
        else
        {
            cout<<"Invalid value"<<endl;
        }


    }
    void setter2(double p)
    {
        if(p>0)
        {
            price=p;
        }

        else
        {
            cout<<"invalid value"<<endl;
        }
    }




    void getter()
    {
        cout<<"Product : "<<name<<"|  Qty : "<<quantity<<" | price : "<<price<<" |  Total : "<<totalvalue<<endl;



    }

};

int main()
{


    Product p1;
    Product p2("laptop",17,1100.00);
    p2.setter1(10);
    p2.setter2(1200.00);

    p2.getter();






}





