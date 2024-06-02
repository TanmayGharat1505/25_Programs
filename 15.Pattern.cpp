// Write a C++ program to find the sum of digits of a number until it becomes a single-digit number.
#include <iostream>
using namespace std;

int main() 
{
  int size = 5;
  // outer loop
  for (int i = 1; i <=size; i++) 
  {
    // inner loop
    for (int j = 0; j < size; j++)
     {
      // print only star in first and last row
      if (i == 1 || i == size) 
      {
        cout << "*";
      }
      else {
        // print star only at first and second position row
        if (j == 0 || j == size - 3) 
        {
          cout << "*";
        }
        else 
        {
          cout << " ";
        }
      }
    }
    cout <<endl;
  }
  return 0;
}