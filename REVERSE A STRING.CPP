#include<iostream>
#include<string>
using namespace std;
string reversestring(string str){
	string reversed=" ";
	for(int i=str.length()-1;i>=0;i--){
		reversed+=str[i];
	}
	return reversed;
}
int main(){
	string str="durga";
	cout<<reversestring(str)<<endl;
	return 0;
}

