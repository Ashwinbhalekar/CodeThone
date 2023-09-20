//Write a program to Calculate Product of Digits of a Number.

#include<iostream>
using namespace std;
int main()
{
    int a,rem,product=1;
    cout<<"Enter the number: ";
    cin>>a;
    while(a!=0)
    {
        rem=a%10;
        product=product*rem;
        a=a/10;

    }
    cout<<product;
}