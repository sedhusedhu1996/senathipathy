#include<stdio.h>
int main()
{
    int n1,n2,lcm;
    printf("enter the string:");
    scanf("%d%d",&n1,&n2);
lcm=(n1>n2)?n1:n2;
while(1)
    {
        if(lcm%n1==0&lcm%n2==0)
        break;
    {
    printf("\nlcm of %d and %d=%d",n1,n2,lcm );
    ++lcm;
    return 0;
}
}
}
