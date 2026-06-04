#include <iostream>
using namespace std;

int main()
{
    int pin, correctPin = 1234;
    int attempts = 0;

    while (attempts < 3)
    {
        try
        {
            cout << "Enter ATM PIN: ";
            cin >> pin;

            if (pin == correctPin)
            {
                cout << "Login Successful";
                break;
            }
            else
            {
                throw pin;
            }
        }

        catch (int)
        {
            attempts++;
            cout << "Wrong PIN" << endl;

            if (attempts == 3)
            {
                cout << "Account Blocked";
            }
        }
    }

    return 0;
}