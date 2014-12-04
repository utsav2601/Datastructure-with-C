/*
 * QueueWithLinkedList.cpp
 *
 *  Created on: Dec 3, 2014
 *      Author: utsav
 */


#include <iostream>
#include "stdlib.h"
#include "stdio.h"
using namespace std;

struct node
{
int info;
node *nextLink;
};

node *rear=NULL, *front =NULL;
void addToQueue(int val);
int deleteFromQueue();
void display();
int main()
{
addToQueue(1);
addToQueue(2);
addToQueue(3);
addToQueue(4);
display();
cout<<deleteFromQueue();
cout<<"After delete from Queue ";
display();
return 0;
}

void display()
{

node *temp = front;
if(temp == NULL && rear == NULL)
{
cout <<"Queue List is empty ";
return ;
}else {

	while(temp != rear)
	{
		cout<<"Value is "<<temp->info;
		temp = temp->nextLink;
	}
	cout<<"Value is "<<temp->info;
}



}

void addToQueue(int val)
{
	//Check if the queue is full, insert the first node
	if(rear ==NULL)
	{
		rear = (struct node *)malloc(sizeof(node));
		rear->info = val;
		rear->nextLink = NULL;
		front = rear;

	}else
	{
		node *temp;
		temp = (struct node*)malloc(sizeof(node));
		temp->info = val;	//increment the rear to the point to next node ;
		temp->nextLink = NULL;
		rear->nextLink = temp;
		rear = temp;
	}


}

int deleteFromQueue()
{
	//if the queue is Empty
	if(rear != NULL)
	{
		node* temp = front;
		front = front->nextLink;
		int val = temp->info;
		free(temp);
		return val;


	}else
	{
		cout <<"Queue is Empty ";

	}



}


