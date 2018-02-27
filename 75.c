#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
	char f[10];
	int n,i,b,c;
	scanf("%s",f);
	n=strlen(f);
	b=n%2;
	c=n/2;
	if(b==0)
	{
		 f[c]='*';
		 f[c-1]='*';
		 printf("%s",f);
	}
	else
	{
		f[c]='*';
		printf("%s",f);
	}

}

