#include<conio.h>
void main()
{
    int i,n,f=0;
    printf("\n enter the number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    if(n%2==0)
    {
        f=1;
        break;
    }
    if(f==0)
    printf("%d,prime",n);
    else
    printf("%d,not prime",n);
    return(0);
}
