/* Write a C program that uses functions to perform the following operations: 
a.	Reading a complex number. 
b.	Writing a complex number. 
c.	Addition and subtraction of two complex numbers 
*/

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex readComplex() {
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi", c.real, c.imag);
    else
        printf("%.2f - %.2fi", c.real, -c.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex subComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum, diff;

    printf("-------------------------------------------------\n");
    printf("     COMPLEX NUMBER OPERATIONS USING FUNCTIONS     \n");
    printf("-------------------------------------------------\n");

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("\nEnter the second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    diff = subComplex(num1, num2);

    printf("\n-------------------------------------------------\n");
    printf("Results:\n");
    printf("-------------------------------------------------\n");

    printf("First number: ");
    writeComplex(num1);
    printf("\n");

    printf("Second number: ");
    writeComplex(num2);
    printf("\n");

    printf("Sum: ");
    writeComplex(sum);
    printf("\n");

    printf("Difference: ");
    writeComplex(diff);
    printf("\n");

    printf("-------------------------------------------------\n");
    printf("Thank you for using the Complex Number Calculator!\n");

    return 0;
}

