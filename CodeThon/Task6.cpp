//Write a program to print EVEN numbers from 1 to N using a while loop.


#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    cout<<"\nEnter the range";
    cin>>n;
    
   while(++i<=n)
    {
        if(i%2==0)
        {
            cout<<"\n"<<i;
        }
    }

}