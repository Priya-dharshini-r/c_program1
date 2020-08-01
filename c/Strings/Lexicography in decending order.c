/*The program must accept N string valuse as input.The program must print the N string values sorted lexicographically in decending order as ouput*/
//Reverse decending order
//Input                          //Output
//4
//project                        //time
//elephant                       //tiger
//tiger                          //project
//time                           //elephant

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
char str[n][100];
for(int i=0;i<n;i++)
{
scanf("%s",&str[i]);
}
for(int i=0;i<n;i++)
{
for(int ci=i+1;ci<n;ci++)
{
if(strcmp(str[i],str[ci])<0)
{
char temp[1001];
strcpy(temp,str[i]);
strcpy(str[i],str[ci]);
strcpy(str[ci],temp);
}
}
printf("%s\n",str[i]);
}
return 0;
}
