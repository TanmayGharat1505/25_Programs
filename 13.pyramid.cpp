#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the row's: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=n-1; j>=i; j--)
        {
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}