/*9. Write a Program of Two 1D Matrix Addition using Operator Overloading.*/

#include<iostream>
using namespace std;
class complex{
	public:
		int x, y;
		
		complex(int a,int b){
			x =a;
			y =b;
		}
		
		complex operator+(complex obj2){
			complex t(0,0);
			t.x = x + obj2.x;
			t.y = y + obj2.y;
			return t;
		}
};

int main(){
	complex obj1(10,20), obj2(10,20), result(0,0);
	result = obj1 + obj2;
	cout<<"\nX:"<<result.x;
	cout<<"\nY:"<<result.y;
}//baki he..
