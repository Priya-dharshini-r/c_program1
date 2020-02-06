#include<stdio.h>
void solid_rect(int n,int m)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void main()
{
	int rows,coloumns;
	printf("\nEnter the number of rows:");
	scanf("%d",&rows);
	printf("\nEnter the number of coloumns:");
	scanf("%d",&coloumns);
	printf("\n");
	solid_rect(rows,coloumns);
}
