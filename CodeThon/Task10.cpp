//Write a program to read an integer and print its multiplication table.

#include <iostream>
using namespace std;
int main() 
{
  int num;
  cout << "Enter an integer: ";
  cin >> num;
  cout << "The multiplication table of " << num << " is:" << "\n";
  for (int i = 1; i <= 10; i++) {
    cout << num << " x " << i << " = " << num * i << "\n";
  }

  return 0;
}