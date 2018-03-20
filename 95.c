#include<stdio.h>
#include<conio.h>
void main()
{
    float P,T,R,S;
    printf("simple interest:\n");
    scanf("%f%f%f",&P,&T,&R);
    S=(P*T*R)/100;
    printf("%f",S);
}
