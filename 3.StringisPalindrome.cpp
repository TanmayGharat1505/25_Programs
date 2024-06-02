//Create a program to check if a given string is a palindrome.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int length ;
    char str[100];
    cout<<"Enter s string"<<endl;
    cin>>str;
    length=strlen(str);
    for(int i=0; i<length; i++)
    {
     if(str[i]==str[length-1-i])
     {
        cout<<"It's a palindrome";
        break;
     }
     else
     {
        cout<<"It's not a plaindrome";
        break;
     }
    }
    return 0;
}