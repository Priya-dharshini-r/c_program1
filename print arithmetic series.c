//Arithmatic progression for 
//Finding nth term

#include<stdio.h>
void printArithmetic(int a,int d,int n)
{
    int CurrentTerm;
    CurrentTerm=a;
    for(int i=0;i<=n;i++)
    {
        printf(CurrentTerm," ");
        CurrentTerm=CurrentTerm+d;
    }
}
int main()
{
    int a,d,n;
    printf("Enter Starting term:");
    scanf("%d",&a);
    printf("Enter difference:");
    scanf("%d",&d);
    printf("Enter last term:");
    scanf("%d",&n);
    printArithmetic(a,d,n);
    return 0;
    
}
