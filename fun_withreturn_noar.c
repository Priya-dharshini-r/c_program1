#include<stdio.h>
int sum();
int sum()
{
	int c,a,b;
	scanf("%d %d",&a ,&b);
	c=a+b;
	return c;
}
void main()
{
	int d;
	d=sum();
	printf("%d",d);

}
