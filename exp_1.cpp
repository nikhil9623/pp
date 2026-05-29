#include <iostream>
using namespace std;
int main()
{
    double num1, num2, result;
    char choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nSelect Arithmetic Operation:\n";
    cout << "+ : Addition\n";
    cout << "- : Subtraction\n";
    cout << "* : Multiplication\n";
    cout << "/ : Division\n";
    cout << "Enter your choice (+, -, *, /): ";
    cin >> choice;
    switch (choice)
    {
    case '+':
        result = num1 + num2;
        cout << "Addition = " << result;
        break;
    case '-':
        result = num1 - num2;
        cout << "Subtraction = " << result;
        break;
    case '*':
        result = num1 * num2;
        cout << "Multiplication = " << result;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Division = " << result;
        }
        else
        {
            cout << "Error! Division by zero is not allowed.";
}
break;
default:
cout << "Invalid Choice!";
}
return 0;
}
