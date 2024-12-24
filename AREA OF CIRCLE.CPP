#include<iostream>
using namespace std;
int areaofcircle(int radius){
	return 3.141*radius*radius;
}
int main(){
	int radius=5;
	cout<<"area of the circle is: "<<areaofcircle(radius)<<endl;
	return 0;
}
