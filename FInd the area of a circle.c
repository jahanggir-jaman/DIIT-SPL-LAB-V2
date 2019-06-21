#include<stdio.h>
#define PI 3.1416

int main()
{
    float radius, area;

    printf("Enter the radius of Circle : ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("\nArea of Circle : %.2f\n", area);

    return 0;
}
