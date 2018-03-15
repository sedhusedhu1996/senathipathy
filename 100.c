#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[10],sum=1,i;
    printf("Enter the number:\n");
    scanf("%d",&n);
    {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
            for(i=0;i<n;i++)
        sum=sum*a[i];
        printf("total %d",sum);
    }
}
