//@Author: Utsav Popli
//Datastructures using C
//Double Linked List
#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
int info;
node *prevLink;
node *nextLink;

};
node *head = NULL, *current;
void addToList(int val);
void displayList();
void deleteFromList(int val);

int main()
{

	for(int i = 7; i<=10;i++)
		addToList(i);
	displayList();
	deleteFromList(7);
	cout<<"new list: ";
	displayList();

return 0;
}


void addToList(int val)
{
	if(head == NULL)
	{
		head = (struct node *)malloc(sizeof(node));
		head->prevLink = NULL;
		head->nextLink = NULL;
		head->info = val;
		return;
	}

node *temp = head;
node *newNode = (struct node *)malloc(sizeof(node));
while(temp->nextLink != NULL){
temp = temp->nextLink;
}
temp->nextLink= newNode;
newNode->prevLink = temp;
newNode->nextLink = NULL;
newNode->info = val;
}


void displayList()
{
node * temp  = head;
cout<<"Print list";
while(temp != NULL)
{
cout <<"Value:"<< temp->info;
temp = temp->nextLink;

}


}


void deleteFromList(int val)
{
	node *temp = head;
	if(temp == NULL)
	{
		return;
	}


	//A check for first node in the list
	if(head->info== val)
	{
		temp = head;
		head = head->nextLink;
		head->prevLink = NULL;
		free(temp);
		return;

	}
	while(temp !=NULL)
	{
		if(temp->info == val && temp->nextLink == NULL)
		{
//re arrange the node
			temp->prevLink->nextLink = temp->nextLink;
			temp->nextLink->prevLink = temp->prevLink;
			free(temp);

		}else
		{
			temp = temp->nextLink;
		}
	}


}
