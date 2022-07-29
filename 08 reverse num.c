#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,i,j,l,result;

    printf("\nEnter the Number: ");
    scanf("%d",&a); //12345

    b=a/10; //1234
    c=a%10; //5
    d=b/10; //123
    f=b%10; //4
    g=d/10; //12
    i=d%10; //3
    j=g/10; //1
    l=g%10; //2

    result = ((c*10000)+ (f*1000)+ (i*100)+ (l*10)+ j);

    printf("\n Reverse of %d is: %d",a,result);

    return 0;
}
