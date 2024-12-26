#include<iostream>
using namespace std;
class series{
	int sum;
	public:
		series(int n){
			sum=n*(n+1)/2;
		}
		series(bool iseven,int n){
			sum=n*(n+1);
		}
		void display() const{
			cout<<"sum:"<<sum<<endl;
		}
};
int main(){
	series s1(5);
	s1.display();
	series s2(true,5);
	s2.display();
	return 0;
}

