#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10]={2,4,6,8,9,0,7,5,3,1};
    int i,j,temp;
    for(i=0;i<10;i++)
{
    for(j=0;j<10;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
   for(i=0;i<10;i++) 
   {
       printf("%d",a[i]);
   }
   getch();
}
