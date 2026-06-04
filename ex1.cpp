#include<iostream>
using namespace std;

int main()
{
    float a, b, result;
    char op;

    cout<<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    cout<<"enter operator:(+,-,*,/)";
    cin>>op;

    switch(op)
    {
        case '+':
         result=a+b;
         cout<<"addition is"<<result;
         break;
        case '-':
         result=a-b;
         cout<<"subraction is"<<result;
         break;
        case '*':
         result=a*b;
         cout<<"multiplication is"<<result;
         break;
        case '/':
         result=a/b;
         cout<<"division is"<<result;
         break;
        default:
         cout<<"invalid operator"; 
    }
    return 0;


}