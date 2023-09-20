//Write a program to find the cube of a number use loop

#include<iostream>
using  namespace std;
int main()
{
    int a,i,cube;
    cout<<"\nEnter any number";
    cin>>a;
    while(a>=1)
    {
        cube=a*a*a;
        cout<<"Cube is "<<cube;
        break;
    }

}