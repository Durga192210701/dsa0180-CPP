#include<iostream>
using namespace std;
bool isdivisibleby3(int n){
	if(n % 3 == 0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int num=9;
	if(isdivisibleby3(num)){
		cout<<num<<" is divisible by 3"<<endl;
	}else{
		cout<<num<<" is not divisble by 3"<<endl;
	}
	return 0;
}

	
