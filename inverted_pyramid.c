#include<stdio.h>
void main()
{
	int i,j,n,k=0;
	printf("Enter the number of rows:\n");
	scanf("%d",&n);
    for(i=n;i>=1;--i)
	{
		for(j=1;j<=i;++j)
		{
			printf("*");
		}
		printf("\n");
	}
}
