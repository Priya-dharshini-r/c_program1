/*the program has to aceept string s print weight of the string as output*/

//moon -->  m position 13 * n position 14 * o position 15 
//13+14+14+14=57

#include<stdio.h>
int main()
{
char str[101];
int i=0;weight=0;
scanf("%s",&str);
while(str[i]!='\0')
{
char ch=tolower(str[i]);
weight+=ch-'a'+1;
i++;
}
printf("%d",weight);
return 0;
}
