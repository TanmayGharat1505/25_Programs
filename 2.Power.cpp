//Create a program to calculate the power of a number using a loop
#include<iostream>
using namespace std;
int main()
{
    int base, result=1;
    float power;
    cout<<"Enter Base ^ power"<<endl;
    cin>>base>>power;
    for(int i=1; i<=power; i++)
    {
        result =result*base;
    }
    cout<<base<<"^"<<power<<" = "<<result;
    
}