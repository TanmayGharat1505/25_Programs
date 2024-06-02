//Create a program to check if a character is a vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter any character"<<endl;
    cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||
       c=='A' || c=='E' || c=='I' || c=='O' || c=='u')
       {
        cout<<c<<" is a vowel";
       }
    else
       {
        cout<<c<<" is a constant";
       }   
return 0;       
}