#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);
    printf("The product of %d and %d is %d\n", a, b, a * b);
    printf("The difference of %d and %d is %d\n", a, b, a - b);
    printf("The quotient of %d and %d is %d\n", a, b, a / b);
    printf("The remainder of %d and %d is %d\n", a, b, a % b);
}

/*
My solution to exercise 2.16:
(Arithmetic) Write a program that reads two integers from the user then displays
 their sum, product, difference, quotient and remainder.
*/