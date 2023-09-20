//Write a program to find second largest number in an array.

#include <iostream>
using namespace std;

int main() {
  int i,size, array[i];
  cout << "Enter the size of the array: ";
  cin >> size;
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  int second_max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > second_max && array[i] < max) {
      second_max = array[i];
    }
  }
  cout << "The second largest number in the array is " << second_max << endl;

  return 0;
}