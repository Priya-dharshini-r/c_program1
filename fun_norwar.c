#include<stdio.h>
void sum(int,int);
void sum(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	sum(a,b);
}
