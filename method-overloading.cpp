#include<iostream>
using namespace std;

// program for method overloading (function overloading)
// compile time polymorphism

class Shape
{
	public:
	
		void area(int val)
		{
			cout<<"Square Area is : ";
			cout<<val*val<<endl;
		}

		void area(float val)
		{
			cout<<"Circle area is ";
			cout<<3.14*val*val<<endl;
		}

		void area(float w,float l)
		{
			cout<<"Rectangle area is ";
			cout<<w*l<<endl;
		}
};

int main()
{

	Shape s1;
	s1.area(2.5f); // "Circle area is "

	Shape s2;
	s2.area(4,5); // "Rectangle area is "

	Shape s3;
	s3.area(6); // "Square area is "

	Shape s4;
	s4.area(9); // square 

	Shape s5;
	s5.area(2.5,3.5);


	return 0;
}
