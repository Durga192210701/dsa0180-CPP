#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<" enter the number:";
	cin>>n;
	for(int i=1;i<=n/2;i++){
		if(n % i == 0){
			sum+=i;
		}
	}
	if(sum>n){
		cout<<n<<" is a abundant number:"<<endl;
	}else{
		cout<<n<<" is not a abundant number:"<<endl;
	}
	return 0;
}

	
