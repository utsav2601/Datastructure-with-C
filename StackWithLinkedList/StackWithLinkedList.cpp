#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {

	int info;
	node *nextLink;

};
struct node *top;

void display();
void push(int val);
int pop();


int main()
{
top = NULL;
push(1);
push(2);
push(3);
push(4);
push(5);

display();
cout<<"removing an element ";
pop();
display();
return 0;
}
void push(int val)
{
	if(top == NULL)
	{
		top = (struct node *)malloc(sizeof(node));
		top->info = val;
		top->nextLink = NULL;
		return ;
	} else {

		node * temp  = (struct node *)malloc(sizeof(node));
		temp->nextLink = top;
		temp->info = val;
		top = temp;

	}



}


void display()
{
if(top ==NULL)
{
cout << "Stack is empty";
return;
}else {
	struct node *temp = top;
	while(temp != NULL)
	{
		cout <<"Value is "<<temp->info;
		temp = temp->nextLink;
	}
}}

int pop()
{
	if(top==NULL)
	{
		cout<<"list is empty";
		return 0;
	}
	else {
		int item;
		node * temp = top;
		top = top->nextLink;
		item = top->info;
		free(temp);
		return item;
	}

}
