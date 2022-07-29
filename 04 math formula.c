
// Constract the formula of the given value



#include <stdio.h>

int main()
{
    float l,b,r,r_area,r_peri,a_circle,c_circle;

    printf("\nEnter the length and Breadth: ");
    scanf("%f%f",&l,&b);
    printf("\nEnter the Radius: ");
    scanf("%f",&r);

    a_circle = (3.14*r*r);       // pie = 3.14
    c_circle = (2*(3.14*r));
    r_area = l*b;
    r_peri = (2*(l+b));

    printf("\nArea of Rectangle: %0.2f", r_area);
    printf("\nPerimeter of Rectangle: %0.2f", r_peri);
    printf("\nArea of Circle: %0.2f",a_circle);
    printf("\nCircumstance of Circle: %0.2f",c_circle);


}
