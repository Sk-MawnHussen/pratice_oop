#include<iostream>
#include<string>
using namespace std;

class Bankaccount
{
private:
    string accountNumber;
    double balance;
public:
    string accountholder;
    double deposit;
    double withdraw;
    Bankaccount(string accountNumber,double balance,string accountholder,double deposit,double
                withdraw)
    {
        this->accountNumber=accountNumber;
        this->balance=balance;
        this->accountholder=accountholder;
        this->deposit=deposit;
        this->withdraw=withdraw;
    }

    void showaccount()
    {

        cout<<"Account holder name: "<<accountholder<<endl;
        cout<<endl;
        cout<<"Account holder account number: "<<accountNumber<<endl;
        cout <<endl;
        cout<<"Account holder balance: "<<balance<<endl;

        cout<<"Account holder deposit: "<<deposit<<endl;
        cout<<endl;
        cout<<"Account holder withdraw: "<<withdraw<<endl;
        cout<<endl;
    }

private:
    string accounttype;

public:

    Bankaccount(string type)
    {

        accounttype=type;
    }
    void transfer(Bankaccount&tergataccount,double ammount)
    {
        if(balance>=ammount)
        {
            balance-=ammount;

            cout<<endl;
            cout<<balance<<endl;
            cout<<endl;
        }
        else
        {
            cout<<endl;
            cout<<"error"<<endl;
            cout<<endl;
        }
    }
};


int main()
{





}
