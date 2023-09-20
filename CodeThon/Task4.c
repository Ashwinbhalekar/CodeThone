//Write a program to compare two no by using the ternary operator in c.

#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter the number: ");
    scanf("%d%d", &num1, &num2);
    
    (num1 > num2) ? printf("%d is greater than %d\n", num1, num2) : 
                   (num1 < num2) ? printf("%d is less than %d\n", num1, num2) :
                   printf("%d is equal to %d\n", num1, num2);
    return 0;
}

