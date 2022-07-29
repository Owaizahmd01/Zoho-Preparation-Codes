
#include <stdio.h>

int main()
{
    int ch, qty,k,net=0;

    owaiz:

    printf("\n\tMENU CARD ");
    printf("\n\t\t1.COFFEE       RS:15");
    printf("\n\t\t2.TEA          RS:10");
    printf("\n\t\t3.COLD COFFEE  RS:25");
    printf("\n\t\t4.MILK SHAKE   RS:50");

    printf("\n\tENTER YOUR CHOICE :  ");
    scanf("\n\t%d",&ch);

    switch(ch)
    {
    case 1:
        printf("\nYou Have Selected COFFEE");
        printf("\nENTER THE QUANTITY: ");
        scanf("\n%d",&qty);
        net=(net+(qty*15));
        break;

    case 2:
        printf("\nYou Have Selected TEA");
        printf("\nENTER THE QUANTITY: ");
        scanf("\n%d",&qty);
        net=(net+(qty*10));
        break;

    case 3:
        printf("\nYou Have Selected COLD COFFEE");
        printf("\nENTER THE QUANTITY: ");
        scanf("\n%d",&qty);
        net=(net+(qty*25));
        break;

    case 4:
        printf("\nYou Have Selected MILK SHAKE");
        printf("\nENTER THE QUANTITY: ");
        scanf("\n%d",&qty);
        net=(net+(qty*50));
        break;

    default:
        printf("\nSOMETHING INVALID, PLEASE CHECK IT OUT");
    }
    printf("\nDO YOU WANT TO CONTINUE PRESS 1: ");
    scanf("%d",&k);
    if(k==1)
    {
        goto owaiz;
    }
    printf("\nTOTAL AMOUNT: %d",net);
    printf("\nTHANK YOU! COME AGAIN");

    return 0;
}
