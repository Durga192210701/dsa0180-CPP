#include<iostream>
using namespace std;
int main(){
	int n,sum=0,original;
	cout<<"enter the numbers:";
	cin>>n;
	original=n;
	while(n>0){
		int digit=n%10;
		sum+=digit*digit*digit;
		n/=10;
	}
	if(sum==original){
		cout<<original<<" it is a armstrong number:"<<endl;
	}else{
		cout<<original<<" it is not a armstrong number:"<<endl;
	}
	return 0;
}

	
