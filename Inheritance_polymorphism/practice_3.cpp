/*3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance).*/

#include<iostream>
using namespace std;
class person{
	protected:
		string name;
		int age;
	public:
		void get_data(){
			cout<<"\nEnter name:";
			cin>>string;
			
			cout<<"\nEnter age:";
			cin>>age;
		}
};
class student
