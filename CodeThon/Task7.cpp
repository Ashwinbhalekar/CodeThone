//Write a program to Multiply without using Multiplication operator (*).

#include<iostream>
using namespace std;
int main() 
{
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  int mult = 0;
  for (int i = 0; i < num2; i++) {
    mult += num1;
  }
  cout << "The multiplication is " << mult << endl;

  return 0;
}