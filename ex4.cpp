#include<iostream>
using namespace std;

// Base Class
class Person
{
public:
    string name;

    void getPerson()
    {
        cout<<"Enter Name: ";
        cin>>name;
    }
};

// Single Inheritance
class Customer : public Person
{
public:
    void showCustomer()
    {
        cout<<"\nCustomer Name = "<<name;
    }
};

// Multilevel Inheritance
class PremiumCustomer : public Customer
{
public:
    void premium()
    {
        cout<<"\nPremium Customer";
    }
};

// Car Class
class Car
{
public:
    int rent;

    void getCar()
    {
        cout<<"\nEnter Car Rent: ";
        cin>>rent;
    }
};

// Multiple Inheritance
class Booking : public Customer, public Car
{
public:
    void total()
    {
        cout<<"\nTotal Amount = "<<rent;
    }
};

// Hierarchical Inheritance     
class Admin : public Person
{
public:
    void admin()
    {
        cout<<"\nAdmin Access";
    }
};

class Driver : public Person
{
public:
    void driver()
    {
        cout<<"\nDriver Assigned";
    }
};

int main()
{
    cout<<"\n--- Single Inheritance ---\n";

    Customer c;
    c.getPerson();
    c.showCustomer();


    cout<<"\n\n--- Multilevel Inheritance ---\n";

    PremiumCustomer p;
    p.getPerson();
    p.showCustomer();
    p.premium();


    cout<<"\n\n--- Multiple Inheritance ---\n";

    Booking b;
    b.getPerson();
    b.getCar();
        b.total();


    cout<<"\n\n--- Hierarchical Inheritance ---\n";

    Admin a;
    a.getPerson();
    a.admin();

    Driver d;
            d.getPerson();
    d.driver();

    return 0;
} 