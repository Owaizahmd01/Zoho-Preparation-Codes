#include <stdio.h>
                                //swapping numbers without third variable.
int main()
{
    int a,b;
    printf("\nEnter the Numbers: ");
    scanf("%d%d",&a,&b);

    printf("\n A= %d  B= %d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n A= %d  B= %d",a,b);


    return 0;

}
