#include<iostream>
using namespace std;
int main(){
	int subject;
cout<<"How many subject you want to Enter: ";
cin>>subject;
string name [subject];
for(int i=0;i<subject;i++){
	cout<<"Enter Subject names "<<i+1<<":";
	cin>>name[i];
	
}
int student;
cout<<"How many Student record you want to enter: ";
cin>>student;
int score[subject][student];
for(int i=0;i<subject;i++){
	cout<<"Enter score for student subjects"<<i+1;
for(int j=0;j<student;j++){
	cin>>score[i][j];
}
}
float sum=0;
for(int i=0;i<student;i++){
	cout<<name[i]<<i+1<<" ";
	float sum=0;
for(int j=0;j<subject;j++){
	cout<<score[i][j]<<" ";
	sum=sum+score[i][j];
}
int aver=sum/student;
cout<<"Average is "<<aver;
cout<<endl<<" ";
}


}
