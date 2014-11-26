/*
 * list.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: utsav
 */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node
	{
	int info;
	node *link;
	};

typedef struct node list;
list *head =NULL, *current;

struct node* addToList(int val);
void traverseList();
void deleteFromList(int val);

int main()
{
	for(int i = 5; i<10; i++)
		addToList(i);
	traverseList();
	deleteFromList(5);
	cout<<"new list";
	traverseList();

}
struct node* addToList(int val)
{
//if the list is empty;
if(head ==NULL)
{
head = (struct node *)malloc(sizeof(node));
head->info = val;
head->link = NULL;
current= head;
return head;
}

list *newNode = (struct node *)malloc(sizeof(node));
if(newNode==NULL)
{
cout<<"Error in creating node";
return NULL;
}

newNode->info = val;
newNode->link = NULL;
current->link = newNode;
current= newNode;
return current;
}

void traverseList()
{
	struct node *temp;
	temp = head;
	if(head !=NULL){
	while(temp !=NULL)
	{
		cout << " List item: "<<temp->info;
		temp =temp->link;

	}
}
}

void deleteFromList(int val)
{
	cout<<"Searching and Deleting from list "<<val;
struct node * temp, *prev;
temp = head;
prev= temp;
//if the list is empty;
if(temp == NULL)
{
return;
}


//a check to see if the element in the list is first element or not;
if(head->info == val)
{
head = temp->link;
free(temp);
return;
}

//iterate through the entire list
while(temp !=NULL)
{

	if(temp->info != val)
{
prev = temp;
temp = temp->link;

}else {

	prev->link = temp->link;
	free(temp);
	break;
}

}

}


