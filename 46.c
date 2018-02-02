#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a<+1000000)
  printf("%d is the next number",a+1);
  else
    printf("give the numbers within a limit");
  return 0;
}
