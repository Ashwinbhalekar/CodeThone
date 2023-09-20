//Write a function in C that reverses a given string in-place without using string

#include<stdio.h>

void reverseString(char* str) {
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    reverseString(str);
    printf("Reversed string: %s", str);

    return 0;
}