#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" enter the numbers:";
	cin>>n;
	cout<<"the mul table is:"<<n<<endl;
	for(int i=1;i<=10;i++){
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
	return 0;
}

