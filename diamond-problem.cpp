#include<iostream>
using namespace std;


class Parent
{
public:
	void run(){
		cout<<"Parent is running"<<endl;
	}

};

class Child1:virtual public Parent {

};


class Child2:virtual public Parent {

};

class SubChild:public Child1, public Child2 {

};




int main()
{

	Parent p;
	p.run();

	Child1 c1;
	c1.run();

	Child2 c2;
	c2.run();


	SubChild sc;
	sc.run();

	return 0;
}
