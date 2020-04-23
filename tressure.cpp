#include<iostream> 
 using namespace std;  
int main()  
{  
  int a,b,c;
  cin>>a>>b>>c;
  int sum=6;
  int g=0,s=0;
if(a>b && a>c)
  g=1;
else if(b>a && b>c)
  g=2;
else
  g=3;
if(a<b && a<c)
  s=1;
else if(b<a && b<c)
  s=2;
else
  s=3;
int x=g+s;
int y=sum-x; 
switch(y)
{
case 1:std::cout<<"The treasure is in box which has number "<<a<<"\nThe code to open the box is 1";
break;
case 2:std::cout<<"The treasure is in box which has number "<<b<<"\nThe code to open the box is 2";
break;
case 3:
cout<<"The treasure is in box which has number "<<c<<"\nThe code to open the box is 3";
break;
}
  return 0;  
}


