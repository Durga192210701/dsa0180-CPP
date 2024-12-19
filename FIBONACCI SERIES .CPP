#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,temp,n;
	cout<<"enter the terms:";
	cin>>n;
	cout<<"the fibonacci series is:"<<a<<b<<endl;
	for(int i=0;i<n;i++){
		int temp=a+b;
		cout<<temp<<" ";
		a=b;
		b=temp;
	}
	return 0;
}

	
