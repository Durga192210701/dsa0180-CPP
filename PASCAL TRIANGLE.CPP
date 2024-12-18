#include<iostream>
using namespace std;
int main(){
	int rows,num;
	cout<<"enter the number of rows:";
	cin>>rows;
	for(int i=0;i<rows;i++){
		num=1;
		for(int j=0;j<=i;j++){
			cout<<num<<" ";
			num=num*(i-j)/(j+1);
		}
		cout<<endl;
	}
	return 0;
}

	
	
