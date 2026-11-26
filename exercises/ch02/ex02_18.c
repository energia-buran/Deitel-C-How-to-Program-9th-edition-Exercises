#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is larger.\n", a);
    }
    if (a < b) {
        printf("%d is larger.\n", b);
    }
    if (a == b) {
        printf("These number are equal.\n");
    }
}


/*
My solution to exercise 2.18:
(Comparing Integers) Write a program that reads two integers from the user
then displays the larger number followed by the words “is larger.” If the numbers
are equal, display the message “These numbers are equal.” Use only the single-selec-
tion form of the if statement you learned in this chapter.
*/