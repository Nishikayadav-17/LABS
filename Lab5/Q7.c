// Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>
int g = 10;   
void fun1() {
    int l = 5; 
    printf("fun1: l = %d\n", l);
    printf("fun1: g = %d\n", g); }

void fun2() {
    printf("fun2: g = %d\n", g); }

int main() {
    fun1();
    fun2();
    printf("main: g = %d\n", g);
return 0; }