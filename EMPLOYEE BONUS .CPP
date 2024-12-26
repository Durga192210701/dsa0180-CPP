#include<iostream>
using namespace std;
class person{
	double salary;
	public:
		void getdata(){
			cout<<"enter the salary:";
			cin>>salary;
		}
		void displaybonus() const{
			cout<<"bonus="<<salary*0.1<<endl;
		}
		
	};
	class admin: virtual public person{};
	class account:virtual public person{};
	class master: public admin,public account{};
	int main(){
		master m;
		m.getdata();
		m.displaybonus();
		return 0;
	}

	
