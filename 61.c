#include<stdio.h>
#include<conio.h>
int main(void)
{
  char s[30];
  int k,i;
  scanf("%s",s);
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    printf("%c",s[i]);
  }
  return 0;
}
