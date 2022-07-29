/*#include <stdio.h>

int main()
{
    int i=0,a;

    printf("\nNUMBER TO STOP: ");
    scanf("%d",&a);

    do
    {
        printf("\n%d",i);
        i=i+2;
    }
    while(i<=a);

    return 0;
}
*/
int sum=0,maxsum=0,i,n=6;
int a[]= {2,-2,-1,3,4,2};
for(int i=0; i<n; i++)
{
    if(i==0|| a[i]<0 ||a[i]<a[i-1])
    {
        if(sum>maxsum){
            maxsum=sum;
        sum=(a[i]>0)?a[i]:0;
    }}
    else sum+=a[i];
}
if(sum>maxsum)maxsum=sum;
printf("%d\n",maxsum);
