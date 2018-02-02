#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[5]={1,2,3,4,5},i,b=0,c;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        b=b+a[i];
    }
    c=b/n;
    printf("%d",c);
    
    getch();
}
