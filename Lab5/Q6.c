// Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

void fun1() {
    printf("fun1: x = %d\n", x); }

void fun2() {
    x = x + 10;
    printf("fun2: x = %d\n", x); }

int main() {
    printf("main: x = %d\n", x);
    fun1();
    fun2();
    fun1();
    return 0; }