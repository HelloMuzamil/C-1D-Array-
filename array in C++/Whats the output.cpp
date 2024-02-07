#include<iostream>
using namespace std;
void fun(int *a,*b)
{
int *c;
c=*a,*a=*b,*b=c;	
}
int main()
{
	fun(&b,&c);
	cout<<c-a-b;
	
}