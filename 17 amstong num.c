#include <stdio.h>

int main()
{
    int a,b,c,d,e,find;

    a=153; //153

    b=a/10; //15

    c=a%10; //3

    d=b/10; //1

    e=b%10; //5

    find=(d*d*d)+(e*e*e)+(c*c*c);

    if (a==find)
    {
        printf("\n%d is an amstorang number",a);

    }
    else
    {
        printf("\n%d is not a amstorang number",a);
    }

    return 0;

}
