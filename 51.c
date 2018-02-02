#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,b,s[3];
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        s[i]=n%10;
        n=n/10;
    }
    printf("\n%d %d %d",s[2],s[1],s[0]);
    getch();
}
