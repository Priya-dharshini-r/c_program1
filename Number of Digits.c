//No.of digit

#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter The Number:");
    scanf("%d",&n);
    while(n!=0)
    {
    
       count++;
       n/=10;
    }
     printf("%d",count);
    
    
}
