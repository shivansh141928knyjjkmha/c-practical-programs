#include <stdio.h>

#define SQUARE(X) ((X) * (X))
#define CUBE(X) ((X) * (X) * (X))

int main()
{
    float side;

    printf("Enter the side length of the container (m): ");
    scanf("%f", &side);

    printf("Square of %.2f = %.2f\n", side, SQUARE(side));
    printf("Cube of %.2f = %.2f\n", side, CUBE(side));

    return 0;
}
