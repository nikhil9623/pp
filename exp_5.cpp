#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
    complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    complex operator + ( const complex& c){
        return complex(real+c.real,imag+c.imag);
    }
    complex operator - ( const complex& c){
        return complex(real-c.real,imag-c.imag);
    }
    complex operator * (const complex& c){
        return complex(real*c.real-imag*c.imag,real*c.imag+imag*c.real);
    }
    complex operator / ( const complex& c){
        int denominator=c.real*c.real+c.imag*c.imag;
        return complex((real*c.real+imag*c.imag)/denominator,(imag*c.real-real*c.imag)/denominator);
    }
    friend istream& operator >> (istream& in,complex& c){
        cout<<"Enter the real part of complex no: ";
        in>>c.real;
        cout<<"Enter the imaginary part: ";
        in>>c.imag;
        return(in);
    }
    friend ostream& operator << (ostream& out,const complex& c){
        if (c.imag>=0)
        {
            out << c.real <<"+"<<c.imag<<"i"<<endl;
        }
        else
        {
            out<<c.real <<"+"<<c.imag<<"i"<<endl;
        }
        return out;
    }
};
int main(){
    complex c1,c2,c3;
    cin>>c1;
    cin>>c2;
    c3=c1+c2;
    cout<<"sum "<<c3;
    c3=c1-c2;
    cout<<"subtraction "<<c3;
    c3=c1*c2;
    cout<<"multiplication "<<c3;
    c3=c1/c2;
    cout<<"division "<<c3;
}
