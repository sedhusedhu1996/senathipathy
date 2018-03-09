#include<stdio.h>
void main()
{
    int n1,n2,m;
    printf("enter the number:");
    scanf("%d %d",&n1,&n2);
    m=(n1>n2)?n1:n2;
    while(1)
    {
    if(m%n1==0&&m%n2)
    break;
    }
    printf("lcm of %d and %d=%d",n1,n2,m);
    ++m;
}


