#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=n+1;
    while(m!=0)
    {
        if(m%10==0)
        {
            printf("%d",m);
            break;
        }
        m++;
    }
  getch();
}
