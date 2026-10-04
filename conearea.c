#include <stdio.h>
#include <math.h>

int main()
{
    float radius, height, slantheight, lateralArea;

    printf("Enter the radius of the ice cream cone (cm): ");
    scanf("%f", &radius);

    printf("Enter the height of the ice cream cone (cm): ");
    scanf("%f", &height);

    slantheight = sqrt(radius * radius + height * height);
    lateralArea = 3.14159 * radius * slantheight;

    printf("Lateral Surface Area of the Cone = %.2f sq.cm\n", lateralArea);

    return 0;
}
