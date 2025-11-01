#include <stdio.h>
#include <math.h> //to allow us use common math functions and constants

int main() {
    double radius, area, circumference;

    // Ask user for radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area and circumference
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    // Display results
    printf("\n--- Circle Details ---\n");
    printf("Radius: %.3lf\n", radius);
    printf("Area: %.3lf\n", area);
    printf("Circumference: %.3lf\n", circumference);
    
    return 0;
}