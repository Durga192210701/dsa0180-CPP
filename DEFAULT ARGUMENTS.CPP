#include<iostream>
using namespace std;
void greeting(string name="guest",string greeting="hello"){
	cout<<greeting<<","<<name<<endl;
}
int main(){
	greeting();
	greeting("alice");
	greeting("bob","welcome");
	return 0;
}

