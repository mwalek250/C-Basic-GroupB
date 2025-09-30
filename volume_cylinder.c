#include <stdio.h>

int main() {
    float radius, height, volume;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Enter height: ");
    scanf("%f", &height);

    volume = 3.14 * radius * radius * height;

    printf("Volume of the cylinder = %.2f\n", volume);

    return 0;
}
