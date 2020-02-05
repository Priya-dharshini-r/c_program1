#include<stdio.h>
int area(int,int);
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
	int a,b,d;
	scanf("%d%d",&a,&b);
	d=sum(a,b);
	printf("%d",d);
}
