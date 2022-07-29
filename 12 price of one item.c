#include <stdio.h>

int main()
{
    float s,p,c;
    printf("\nSELLING price of 15 items: ");
    scanf("%f",&s);

    printf("\nTOTAL PROFITS: ");
    scanf("%f",&p);
    c=(s-p)/15;

    printf("\nTHE PRICE OF ONE ITEM IS: %0.2f",c);


    return 0;
}
