//Write a C++ program to display the Fibonacci sequence up to N terms
#include<iostream>
using namespace std;
int main()
{
    int n, x=0, y=1, z;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"The Fibonacci series is:"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<x<<endl;
        z = y+x;
        x=y;
        y=z;
    }
 return 0;
}