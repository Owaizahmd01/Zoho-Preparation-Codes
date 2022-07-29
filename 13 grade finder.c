#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,Total;
    float Avg;

    printf("\nEnter the marks: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    Total=m1+m2+m3+m4+m5;
    Avg = Total/5.0;

    printf("\nTOTAL   : %d",Total);
    printf("\nAVERAGE : %0.2f",Avg);

    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        printf("\nRESULT : PASS");
        if(Avg>=90&&Avg<=100)
        {
            printf("\nGRADE : A GRADE");
        }
        else if(Avg>=80&&Avg<=89)
        {
            printf("\nGRADE : B GRADE");
        }
        else if (Avg>=70&&Avg<=79)
        {
            printf("\nGRADE : c GRADE");
        }
        else
        {
            printf("\nGRADE : D GRADE");
        }


    }
    else
  {
        printf("\nRESULT : FAIL");
        printf("\nGRADE  : NO GRADE");

    }


    return 0;
}
