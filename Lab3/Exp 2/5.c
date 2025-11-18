#include <stdio.h>
int main() {
    int Length,Breadth, perimeter, area;
    printf("Enter length");
    scanf("%d", &Length);
    printf("Enter breadth");
    scanf("%d", &Breadth);
perimeter= 2*(Length+Breadth);
area= (Length*Breadth);
    printf("The perimeter is: %d\n", perimeter);
    printf("The area is: %d\n", area);
    return 0; }