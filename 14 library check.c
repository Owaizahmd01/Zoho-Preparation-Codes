#include <stdio.h>

int main()
{
    int days;
    printf("\nENTER THE DAY: ");
    scanf("%d",&days);

    if (days>=1&&days<=5)
    {
        printf("\nFINE IS 50 PAISE");
    }
    else if(days>=6&&days<=10)
    {
        printf("\nFINE IS 1 RUPEES");
    }
    else if(days<=11&&days>=29)
    {
        printf("\nFINE IS 5 RUPEES");
    }
    else
    {
        printf("\nMEMBERSHIP WILL BE CANCELLED");
    }


    return 0;

}
