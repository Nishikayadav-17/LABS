// WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter first length: ");
    scanf("%d", &num1);
    printf("Enter second length: ");
    scanf("%d", &num2);
    printf("Enter third length: ");
    scanf("%d", &num3);

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1) 
       {if (num1 == num2 && num2 == num3) 
           {printf("The triangle is Equilateral.\n");}
        else if (num1 == num2, num2 == num3, num1 == num2) 
           {printf("The triangle is Isosceles.\n");}
        else 
           {printf("The triangle is Scalene.\n");} }
        else 
           {printf("The given sides do not form a valid triangle.\n");} 
    return 0; }
