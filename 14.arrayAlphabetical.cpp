//Create an array of strings and display them in alphabetical order.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string array[5]={ };

cout << "Enter 5 strings:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "String " << i + 1 << ": ";
        getline(cin, array[i]);// read complete line of user input
    }

    // Sort strings in alphabetical order
    sort(array, array + 5);//to sort from start of array to upto array + 5(mention range)
    cout<<"\nstrings in alphabetic order are:\n";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << "\n";
      
}}