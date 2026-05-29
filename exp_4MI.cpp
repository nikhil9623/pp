
#include <iostream>
using namespace std;
// Multiple Inheritance
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
class driver
{
protected:
    string driver_name;
    int license_no;
public:
    void getdriverdata();
};
void driver::getdriverdata()
{
    cout << "Enter driver name: ";
    cin >> driver_name;
    cout << "Enter license number: ";
    cin >> license_no;
}
class rental : public car, public driver
{
protected:
    int days;
public:
    void getrentaldata();
    void showrentaldata();
};
void rental::getrentaldata()
{
    cout << "Enter number of days for rental:";
    cin >> days;
}
void rental::showrentaldata()
{
    putcardata();
    cout << "Driver Name: " << driver_name << endl;
    cout << "License Number: " << license_no << endl;
    cout << "Number of days for rental: " << days << endl;
    cout << "Total Bill: " << days * rent_per_day << endl;
}
int main()
{
    rental r;
    r.getcardata();
    r.getdriverdata();
    r.getrentaldata();
    cout << "\n-----Rental Details-----\n";
    r.showrentaldata();
    return 0;
}