/*polymorePhoism*/

#include<iostream>
using namespace std;
class A{
	public:
		float sum(int a, float b){
			return a+b;
		}
		int sum(int a, int b, int c){
			return a +b +c;
		}
		double sum(int a, float b, double c, long d){
			return a + b + c + d;
		}
};

int main(){
	A ob;
	cout<<"\n"<<ob.sum(23,56.90);
	cout<<"\n"<<ob.sum(10,10.10,10.10,10);
	cout<<"\n"<<ob.sum(50,50,50);
}
