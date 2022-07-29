#include <stdio.h>

int main()
{
    int num;

    printf("\nENTER THE NUMBER: ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("\n%d is a even number",num);
    }
    else
    {
        printf("\n%d is an odd number",num);
    }
    return 0;
}
