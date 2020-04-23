#include<iostream>
using namespace std;
int main()
{
  int n,f,count=0;
  cin>>n;
  cout<<n<<"\n";
  while(n!=1)
  {
    if(n%2==0)
    {
      f=n/2;
    }
    else
    {
      f=3*n+1;
    }
    n=f;
    cout<<n<<"\n";
    count++;
  }
  cout<<count;
}
  
