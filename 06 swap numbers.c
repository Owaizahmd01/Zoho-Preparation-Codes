#include <stdio.h>

int main()
{
    int c,d,a;
    printf("\nEnter the numbers: ");
    scanf("%d%d",&c,&d);

    printf("\n C: %d  D: %d",c,d);
    a=c;
    c=d;
    d=a;

    printf("\n C: %d  D: %d",c,d);






    return 0;
}
