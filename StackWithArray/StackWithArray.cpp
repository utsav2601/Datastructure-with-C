//@Author: Utsav Popli
//Datastructures using C
//Implementation of Stack for Array

#include <iostream>

using namespace std;

#define size 7

struct stack{

	int a[size];
	int top;
}stack;

void push(int val);
void display();
int pop();
int isEmpty();
int isFull();
int main()
{

push(6);
push(7);
push(8);
push(9);
push(10);
push(11);
push(12);
display();
cout<<endl <<"should show error as stack is full";
push(13);
cout<<endl <<"Removing an item from stack";

cout << pop();
//cout<<"list after removing item";
display();
return 0;
}

void push(int val)
{
	if(isFull())
	{
		cout<<"Stack is FULL";
	}else {
stack.a[stack.top] = val;
stack.top++;
	}
}

//Check if the Stack is empty or not
int isEmpty()
{
if(stack.top ==-1)
{
return 1;
}else
	return 0;

}

void display()
{
if(isEmpty())
{
cout<<"stack is empty";
}

else {
for (int i =0; i < stack.top; i++)
{
cout<<"Value: "<<stack.a[i];
}
}
}

//Check if the stack is Full or not
int isFull()
{
	//return true if the stack is all full
if(stack.top > size-1)
	return 1;
else
	return 0;

}

int pop()
{
if(isEmpty())
{
	cout<<"List is Empty";
return 0;
}

int item = stack.a[stack.top];
stack.top--;
return item;

}
