#include <stdio.h>

int main()
{
    int pop,popmen, popwom, poplit,litmen,litwom,ilitmen, ilitwom;
    pop=80000;
    popmen=(52*pop)/100;
    popwom=80000-popmen;
    poplit=(48*pop)/100;
    litmen=(35*pop)/100;
    litwom=pop-litmen;
    ilitwom=pop-litwom;
    ilitmen=pop-litmen;

    printf("\nTOTAL POPULATION: %d",pop);
    printf("\nTOTAL MENS      : %d",popmen);
    printf("\nTOTAL WOMENS    : %d",popwom);
    printf("\nTOTAL LITRACY   : %d",poplit);
    printf("\nLIT.. MENS      : %d",litmen);
    printf("\nLIT.. WOMENS    : %d",litwom);
    printf("\nILIT.. MENS     : %d",ilitmen);
    printf("\nILIT. WOMENS    : %d",ilitwom);






    return 0;
}
