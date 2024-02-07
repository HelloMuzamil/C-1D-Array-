#include<iostream>
using namespace std;
int main(){
  int fib[10];
      fib[0]=0;
      fib[1]=1;
cout<<"First 8 fibonaci sequence are:"<<" ";
for(int i=2;i<10;i++)
{	
fib[i]= fib[i-1] + fib[i-2];
   cout<< fib[i]<<" ";
} } 
