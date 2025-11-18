#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, max;

    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%d %d", &l1, &b1);
    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%d %d", &l2, &b2);
    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    printf("Perimeter of Rectangle 1 = %d\n", p1);
    printf("Perimeter of Rectangle 2 = %d\n", p2);
    printf("Perimeter of Rectangle 3 = %d\n", p3);

    if (max == p1)
        printf("Rectangle 1 has the highest perimeter: %d\n", max);
    else if (max == p2)
        printf("Rectangle 2 has the highest perimeter: %d\n", max);
    else
        printf("Rectangle 3 has the highest perimeter: %d\n", max);

    return 0; }