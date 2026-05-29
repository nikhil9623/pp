#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int pin, attempts = 0; 
    const int correct_pin = 4321;   // const keyword 
 
    while (attempts < 3) 
    { 
        try 
        { 
            cout << "Enter ATM PIN: "; 
            cin >> pin; 
 
            if (pin != correct_pin) 
            { 
                throw pin;   // exception if wrong pin 
            } 
 
            cout << "ATM PIN verified, Access granted" << endl; 
            break; 
        } 
        catch (int p) 
        { 
            attempts++; 
            cout << "Incorrect PIN. Attempts left: " 
                 << (3 - attempts) << endl; 
 
            if (attempts == 3) 
            { 
                cout << "Card blocked due to invalid PIN" << endl; 
            } 
        } 
    } 
 
    return 0; 
} 