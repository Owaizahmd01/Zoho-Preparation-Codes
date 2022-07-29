#include <stdio.h>

int main()
{
    int i = 0;
owaiz:
    printf("\n%d",i);
    i++;
    if (i!=5)
    {
        goto owaiz;

    }
    printf("\nfine");

    return 0;
}
