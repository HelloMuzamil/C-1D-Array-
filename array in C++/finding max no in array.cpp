#include<iostream>
using namespace std;
int main(){
	int n,marks[n],maxmarks;
cout<<"How many array size you want to declare";
   cin>>n;
for(int i=0;i<n;i++){
	cin>>marks[i];
}
maxmarks=marks[0];
for(int i=1;i<n;i++){
	if(marks[i]>maxmarks)
	maxmarks=marks[i];

}
	cout<<"Max marks is:"<<maxmarks;
}
