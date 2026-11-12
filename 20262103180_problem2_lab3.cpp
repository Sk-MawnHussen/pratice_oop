#include<bits/stdc++.h>
using namespace std;
class Bankaccount
{

public:
    string name;


    double deposit;
    double balance=5000;

    Bankaccount()
    {

        cout<<"Holder: Unknown  | Balance:0"<<endl;


    }

    Bankaccount(string a,double b)
    {


        cout<<"Holder:     "<<a;
        balance=balance+b;

        if (balance>=0)
        {


            cout<<"  | Balance: "<<balance<<endl;

        }
        else cout<<"  |  Invalid Deposit"<<endl;

    }

};

int main()
{
    Bankaccount acc_1;
    Bankaccount acc_2("Bob",1500);


}





