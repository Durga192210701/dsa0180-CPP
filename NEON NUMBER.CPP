#include<iostream>
using namespace std;
int main(){
	int square,n,sum=0;
	cout<<"enter the numbers:";
	cin>>n;
	square=n*n;
	while(square>0){
		sum+=square%10;
		square/=10;
	}
	if(sum==n){
		cout<<n<<" is a neaon number:"<<endl;
	}
	else{
		cout<<n<<" is not a neaon number:"<<endl;
	}
	return 0;
}

