#include <stdio.h>

int main() {
    float radius, volume;

    printf("Meghavika Baidya 21BLC1667\n");
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    volume = (4.0/3) * 3.14 * radius * radius * radius;
    printf("The volume of the sphere with radius %.2f is %.2f cubic units.\n", radius, volume);
    
    return 0;
}
