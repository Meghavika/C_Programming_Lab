#include <stdio.h>

#define PI 3.14159265359

int main() {
    double radius, diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Diameter of the circle: %.2lf\n", diameter);
    printf("Circumference of the circle: %.2lf\n", circumference);
    printf("Area of the circle: %.2lf\n", area);

    return 0;
}
