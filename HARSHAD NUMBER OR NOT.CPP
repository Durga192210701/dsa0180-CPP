#include<iostream>
using namespace std;
int main(){
	int n,sum=0,temp;
	cout<<"enter the number:";
	cin>>n;
	temp=n;
	while(temp>0){
		sum+=temp%10;
		temp/=10;
	}
	if(n % sum==0){
		cout<<n<<" is a harshad number:"<<endl;
	}else{
		cout<<n<<" is not a harshad number:"<<endl;
	}
	return 0;
}

	
