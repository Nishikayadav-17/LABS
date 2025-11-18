// Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>

void modifyValues(int *x, float *y) {
    *x = *x + 10;
    *y = *y * 2;
}

int main() {
    int num = 5;
    float val = 3.5;

    printf("-------------------------------------------------\n");
    printf("     PASS BY REFERENCE USING POINTERS IN C        \n");
    printf("-------------------------------------------------\n");

    printf("Before modification:\n");
    printf("Integer value: %d\n", num);
    printf("Float value  : %.2f\n", val);

    modifyValues(&num, &val);

    printf("\nAfter modification (inside function):\n");
    printf("Integer value: %d\n", num);
    printf("Float value  : %.2f\n", val);

    printf("-------------------------------------------------\n");
    printf("      Program executed successfully! 🎯\n");
    printf("-------------------------------------------------\n");

    return 0;
}