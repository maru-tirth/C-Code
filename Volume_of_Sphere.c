#include <stdio.h>

int main()
{
float r, pi = 3.1416, vol;
printf("Enter radius of sphere: ");
scanf("%f", &r);
vol = (4.0 / 3.0) * pi * r * r * r;
printf("Volume of the sphere is: %.2f\n", vol);
return 0;
}
