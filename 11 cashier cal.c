
// RUPEES: 1275 /-
//100*12 = 1200 /-
//50*1  = 50/-
//10*2  = 20/-
// BALANCE 5 rupees

#include<stdio.h>

int main()
{
    int amt;

    amt=1275;
    printf("\n Enter the amount: ");
    scanf("%d",&amt);

    printf("\nREQUIERD NOTES OF 100: %d",(amt/100));
    printf("\nREQUIERD NOTES OF 50 : %d",(amt%100)/50);
    printf("\nREQUIERD NOTES OF 10 : %d",(amt%100)%50/10);
    printf("\nBALANCE REQUIERD OF TOTAL %d is: %d",amt,(amt%100)%50%10);
    return 0;
}
