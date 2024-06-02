//Implement a program to find the GCD of two numbers using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int N1 ,N2 , gcd;
    cout<<"Enter First Number : "<<endl;
    cin>>N1;
    cout<<"Enter Second Number: "<<endl;
    cin>>N2;
    for(int i=1; i<=N1; i++)
    {
        if(N1%i==0 && N2%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd<<" is Greatest common divisor of "<<N1<<" and "<<N2;
    return 0;
}  
    