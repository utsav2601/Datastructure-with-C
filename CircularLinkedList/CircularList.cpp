#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
int info;
node *nextLink;

};
node *head =NULL;
void addToList(int val);
void displayList();
int main()
{
for (int i =5 ; i<=10;i++)
{
addToList(i);
}
displayList();
return 0;
}

void addToList(int val)
{

	if(head == NULL)
{
head = (struct node *)malloc(sizeof(node));
head->info = val;
head->nextLink = head;
} else {

node *current = head;
while(current->nextLink != head)
{
current = current->nextLink;
}
node *temp = (struct node *)malloc(sizeof(node));
current->nextLink = temp;
temp->nextLink = head;
temp->info = val;


}


}


void displayList()
{
	if(head==NULL)
	{
		cout<<"List is Empty";
		return;
	}
	node *temp = head;
	while(temp->nextLink != head)
	{
		cout<<"Value is: "<<temp->info;
		temp = temp->nextLink;
	}
	cout<<"Value is"<<temp->info;
}

