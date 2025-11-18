//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

#include <stdio.h>
int main() {
    int num, positive=0, negative=0, zero=0;
    char choice;
    do
    {
    printf("Enter the number = ");
    scanf("%d", &num);

    if (num == 0)
      zero++;
    else if (num > 0)
      positive++;
    else if(num<0)
      negative++;

    printf("Do you wish to continue? (Y/N)= ");
    scanf(" %c", &choice);
     if (choice!='Y' && choice!='y' && choice!='N' && choice!='n')
        { printf("Invalid choice, please enter Y/y/N/n\n"); }
    }

    while (choice=='Y' || choice=='y');
    printf("Positives = %d\nNegatives = %d\nZeros = %d", positive, negative, zero);
    return 0; }