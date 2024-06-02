//Implement a program to check if a given number is prime or not.
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
    if(n<0)
    {
        cout<<"Enter the positive integer";

    }
    else if(count == 1)
    {
        cout<<n<< " is a prime number"<<endl;
    }
    else 
    {
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;

}