#include<iostream>
using namespace std;


class A {

public:
	int salary;
	string name;

	void countsalary()
	{
		cout<<"A is counting salary"<<endl;
	}
};

class B:public A
{

};

class C: public B
{

};

class D:public C
{

};

int main() 
{
	D defender;
	defender.countsalary();

	defender.salary = 10000;

	cout<<defender.salary<<endl;


	return 0;
}






