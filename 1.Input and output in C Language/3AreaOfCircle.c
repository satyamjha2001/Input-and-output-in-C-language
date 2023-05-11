#include <stdio.h>
#define pi 3.14
int main()
{
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f", &r);
    printf("Area of circle is %.2f having the radius %.2f",(pi*r*r),r);
    return 0;
}