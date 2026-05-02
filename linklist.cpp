#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int n)
	{	
		data = n;
		next = NULL;
	}

};

class Linklist
{
	Node *head,*tail;

public:
	Linklist()
	{
		head = NULL;
		tail = NULL;
	}

	void append(int num)
	{
		Node *newnode = new Node(num);
		if(head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		
	}

	void display()
	{
		Node *temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}


};




int main()
{

	Linklist l;
	l.append(10);
	l.append(20);
	l.append(30);
	l.append(40);
	l.append(50);

	l.display();


	return 0;
}
