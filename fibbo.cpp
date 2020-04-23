#include<iostream>
using namespace std;
int main(){
  int a=0;
  int b=1;
  int c;
  int i,number;
  cin>>number;
  for(i=2;i<number;++i)
  {
    c=a+b;
    a=b;
    b=c;
  }
  cout<<c;
}
