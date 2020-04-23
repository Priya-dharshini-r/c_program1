#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int i,number,even_sum,odd_sum;
  cin>>number;
  for(i=1;i<=number;i++)
  {
    if(i%2==0)
    {
      even_sum=even_sum+i;
    }
    else
    {
      odd_sum=odd_sum+i;
    }
  }
  if(even_sum==odd_sum)
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }
}
