// Declare variables with different code blocks and test their accessibilty within and outside those blocks.

#include <stdio.h>
int main() {
    int a = 10;
    printf("a in main = %d\n", a); {
        int b = 20;
        printf("a in block = %d\n", a);
        printf("b in block = %d\n", b); } {
            int c = 30;
            printf("a in another block = %d\n", a);
            printf("c in another block = %d\n", c); }

return 0; }