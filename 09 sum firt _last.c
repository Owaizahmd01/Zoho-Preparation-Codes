#include <stdio.h>
                          // add first and last digit of four numbers
int main()
{
    int a,b,c,d,e,h,i,f;
    printf("\n Enter the Value: ");
    scanf("%d",&a); //1234

    b=a/10; //123
    c=a%10; //4
    d=b/10; //12
  //  e=b%10; //3
    f=d/10; //1
//   i=d%10; //2

    h=c+f;
    printf("\n Sum of digits: %d",h);
    return 0;
}
