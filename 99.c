#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,D;
	printf("enter the number:\n");
	scanf("%d%d%d",&a,&b,&c);
	D=(a*b)%c;
	printf("%d",D);
}
