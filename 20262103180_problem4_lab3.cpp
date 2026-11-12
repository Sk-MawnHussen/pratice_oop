#include<bits/stdc++.h>
using namespace std;
class Car
{
private:
    string brand;
    string model;
    double price;
public:
    Car(string a,string b,double c)
    {
        brand=a;
        model=b;
        price=c;

    }
    string bran()
    {

       brand=brand;
        model=model;
        return model,brand;

    }
    double pric()
    {

        price=price;
        return price;

    }

    void display(){

    cout<<"Brand : "<<brand<<" | Model : "<<model<<" | price :"<<price<<endl;
    cout<<"Brand : "<<brand<<" | Model : "<<model<<" | price :"<<price<<endl;

    }


};

int main ()
{
 string a,d;
 double c,f;
    Car car1("Toyata","Corolla",250000);
    Car car2("Honda","Civic",280000);

   car1.display();


}





