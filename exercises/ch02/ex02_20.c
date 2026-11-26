#include <stdio.h>

int main(void)
{
    printf("Diameter of circle with radius=2 is %f\n", 2.0*2);
    printf("Circumference of circle with radius=2 is %f\n", 2.0*3.14159*2);
    printf("Area of circle with radius=2 is %f\n", 3.14159*2*2);
}

/*
My solution to exercise 2.20:
(Circle Area, Diameter and Circumference) For a circle of radius 2, display the
diameter, circumference and area. Use the value 3.14159 for π. Use the following for-
mulas (r is the radius): diameter = 2r, circumference = 2πr and area = πr2. Perform each
of these calculations inside the printf statement(s) and use the conversion specifica-
tion %f. This chapter discussed only integer constants and variables. Chapter 3 will
discuss floating-point numbers—that is, values that can have decimal points.
*/