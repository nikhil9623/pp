
#include <iostream>
using namespace std;
// Single Level Inheritance
class car
{
protected:
    string car_name;
    string brand;
    int rent_per_day;
public:
    void getcardata();
    void putcardata();
};
void car::getcardata()
{
    cout << "Enter car name: ";
    cin >> car_name;
    cout << "Enter brand: ";
    cin >> brand;
    cout << "Enter rent per day: ";
    cin >> rent_per_day;
}
void car::putcardata()
{
    cout << "Car Name: " << car_name << endl;
    cout << "Brand: " << brand << endl;
    cout << "Rent per day: " << rent_per_day << endl;
}
class customer : public car
{
protected:
    int customer_id;
    string customer_name;
public:
    void getcustomerdata();
    void display();
};
void customer::getcustomerdata()
{
    cout << "Enter customer id: ";
    cin >> customer_id;
    cout << "Enter customer name: ";
    cin >> customer_name;
}
void customer::display()
{
    cout << "\n-----Customer Details-----\n";
    cout << "Customer ID: " << customer_id << endl;
    cout << "Customer Name: " << customer_name << endl;
    cout << "-----Details of Car rented-----" << endl;
    putcardata();
}
int main()
{
    customer c;
    c.getcardata();
    c.getcustomerdata();
    c.display();
    return 0;
}