
// 32f-32)x 5/9

#include <stdio.h>

int main()
{
    float f, c;
    printf("\n Enter the temperature: ");
    scanf("%f",&f);
    c= (f-32)*(5.0/9.0);

    printf("\n Temperature: %0.2f",f);
    printf("\n Celsious: %0.2f",c);


    return 0;
}
