#include<iostream>
using namespace std;


class Root
{
public:
	void cook()
	{
		cout<<"root is cooking food"<<endl;
	} 
};

class Child1:public Root
{
public:
	void sing() {
		cout<<"Child1 is singing"<<endl;
	}
};



class Child2:public Root
{
public:
	void dance()
	{
		cout<<"Child2 is dancing"<<endl;
	}
};

class Subchild1:public Child1
{

};

class SubChild2:public Child1
{

};

class SubChild3:public Child2
{

};

class SubChild4:public Child2
{

};

int main()
{
	Root r;
	r.cook();

	Child1 c1;
	c1.cook();

	Child2 c2;
	c2.cook();

	Subchild1 sc1;
	sc1.cook();
	sc1.sing();

	SubChild2 sc2;
	sc2.cook();
	sc2.sing();

	SubChild3 sc3;
	sc3.cook();
	sc3.dance();

	SubChild4 sc4;
	sc4.cook();
	sc4.dance();

	// sc4.sing();

	




}


