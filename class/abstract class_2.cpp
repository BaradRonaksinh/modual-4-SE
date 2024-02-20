/***/
#include<iostream>
using namespace std;
class shape{
	protected:
		virtual void area() = 0;
};
class react:public shape{
	public:
		int a, b,areaOf;
		void area(){
			cout<<"\n enter value of width and height:";
			cin>>a;
			cin>>b;
			areaOf = a * b;
			cout<<areaOf;
		}
};

class circle:public shape{
	public:
		int r, area;
		void area(){
			cout<<"\n enter radius:";
			cin>>r;
			area = 3.14 * r* r;
			cout<<area;
		}
		
};//baki he

class square:public shape{
	public:
		int a, area;
		void area(){
			cout<<"\n Enter length";
			cin>>a;
			area = a*a;
			cout<<area;
		}
};

int main(){
	circle a1;
	a1.area();
	rectangle r1;
	r1.
}
