// part1_variables.c
//
// This program was written by H11A,
// on 06/06/2024
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
    // 1. Prompt the user to input a radius
    printf("Please input a radius: ");

    // 2. Declare a variable to store the radius
    int radius;

    // 3. Scan in the radius from the user
    scanf("%d", &radius);

    // 4. Calculate the area
    double area = PI * radius * radius;

    // 5. Print out the area
    printf("The area of the circle with radius %d is %0.9lf\n", radius, area);

    return 0;
}
