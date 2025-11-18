// 5.	Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.

#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int i, j;
    char temp;

    j = strlen(str) - 1; // last index

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char text[100];

    printf("Enter a string: ");
    gets(text);   // read string (use gets for simplicity in small programs)

    REVERSE(text);

    printf("Reversed string is: %s\n", text);

    return 0;
}