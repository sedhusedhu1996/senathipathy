#include<stdio.h>
void main()
{
int i,j;
printf("\n Enter the 2 numbers");
scanf("%d %d",&i,&j);
i=i^j;
j=i^j;
i=i^j;
printf("\n swapping number is %d %d",i,j);
}
