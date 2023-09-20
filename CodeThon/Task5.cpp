//Write a program to print weekday of given date.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<" Enter the date :";
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"\nSunday";
        break;
        cout<<"\nMonday";break;
        cout<<"\nTuesday";break;
        cout<<"\nWednesday";break;
        cout<<"\nThursday";break;
        cout<<"\nFriday";break;
        cout<<"\nSaturday";break;
        cout<<"\nDoes not exsist";break;


    }
}


