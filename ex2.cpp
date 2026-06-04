#include<iostream>
using namespace std;

int main()
{
    int arr[10], n, i;
    int sum=0;
    float avg;
    int value, pos;

    cout<<"enter number of elements";
    cin>>n;

    cout<<"enter array elements";
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //display odd indexed number
    cout<<"odd indexed no. are";
    for(i=0; i<n; i++)
    {
        if(i%2 !=0)
        {
            cout<<arr[i]<<" ";
        }
    }

    //calculate sum
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum is"<<sum;

    //calculate average
    avg = sum / (float)n;

    cout<<"average is "<<avg;

    //add element
    cout<<"enter position to insert element";
    cin>>pos;

    cout<<"enter value";
    cin>>value;

    for(i=n; i>=pos; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos-1]=value;
    n++;

    cout<<"array after insertion";

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    //delete element
    cout<<"enter position to delete element";
    cin>>pos;

    for(i=pos-1; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    cout<<"array after deletion";

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;


}