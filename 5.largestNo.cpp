//Implement a program that finds the largest among three numbers using nested if-else statements.
#include<iostream>
using namespace std;
int main()
{
    int N1, N2, N3;
    cout<<"Enter first number :";
    cin>>N1;
    cout<<"Enter second number :";
    cin>>N2;
    cout<<"Enter third number :";
    cin>>N3;
    if(N1>N2)
    {
        if (N1>N3)
        {
            cout<<"Largest number is " <<N1;
        }
        else
        {
            cout<<"largest number is " <<N3;
        }
    }
    else 
    {
        if(N2>N3)
        {
            cout<<"largest number is " <<N2;
        }
        else 
        {
            cout<<"largest number is " <<N3;
        }
    }
 return 0;
}