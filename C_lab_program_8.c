/*
Write a program in C to find the value of Pi = 3.14 without
using 22/7 or 3.14 or it's equivalents?
*/
# include <stdio.h>
int main()
{
    int circumference,diameter,radius,pi,needed;
    printf("Enter the radius for the circle : ");
    scanf("%d",&radius);
/*
As we know, Pi = Circumference of the circle / Diameter of the circle
*/
    circumference = 2*pi*radius;
    diameter = 2 * radius;
    needed = circumference/diameter;
    printf("The value of 'pi' is : %d\n",needed);
    return 0;
}