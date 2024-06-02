//mplement a program that determines the grade of a student based on their marks of 5 subjects.
#include<iostream>
using namespace std;
int main()
{
    int english, maths, science, history, hindi, marathi , Marks, totalmarks;
    cout<<"Enter your English Marks: ";
    cin>>english;
       cout<<"Enter your maths Marks: ";
       cin>>maths;
       cout<<"Enter your science Marks: ";
       cin>>science;
       cout<<"Enter your history Marks: ";
       cin>>history;
       cout<<"Enter your hindi Marks: ";
       cin>>hindi;
       cout<<"Enter your marathhi Marks: ";
       cin>>marathi;

        totalmarks=Marks%600*100;
        cout<<"Total marks are" <<totalmarks<<endl;
        
       if(Marks>=90)
       {
        cout<<"Congrats you got A grade";
       }
       else if (Marks>=70 && Marks<90)
       {
        cout<<"Congrats you got B grade";
       }
       else if (Marks>=50 && Marks<70)
       {
        cout<<"Congrats you got C grade";
       }
       else if(Marks>=35 && Marks<50)
       {
        cout<<"Congrats you got D grade";
       }
       else 
       {
        cout<<"You are Fail (Better Luck Next Time)";
       }


}
