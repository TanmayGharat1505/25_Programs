//Write a C++ program to check if a number is prime or composite.
#include<iostream>
using namespace std;
int main()
{
    int n , count = 0;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        if(n % i == 0)
       { 
        count++;
       }
    }
    if(n==0)
    {
        cout<<"0 is neither prime nor composite";

    }
    else if(n<0)
    {
        cout<<"number can't be negative";
    }
    else if(count == 1)
    {
        cout<<n<< " is a prime number"<<endl;
    }
    else 
    {
        cout<<n<<" is composite number"<<endl;
    }
    return 0;

}