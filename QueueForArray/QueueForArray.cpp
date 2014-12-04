/*
 * QueueForArray.cpp
 *
 *  Created on: Dec 2, 2014
 *      Author: Utsav
 */

#include <iostream>
using namespace std;

void addToQueue(int val);
void display();
int deleteFromQueue();

#define size 7
int a[size];
int rear =-1, front =0 ;
int main()
{
addToQueue(1);
addToQueue(2);
addToQueue(3);
addToQueue(4);
addToQueue(5);
display();

cout <<"After removing element"<<deleteFromQueue()<<endl;
display();

return 0;
}

void addToQueue(int val)
{

	//check if the queue is full
	//if the rear element is at the last position then the queue is full

	if(rear == size-1)
	{
		cout<<"Queue is full";

	}else {
		rear++;
		a[rear] = val;

	}
}

int deleteFromQueue()
{
	int item =-1;
	//check if the queue is empty
	if(rear == -1)
	{
		cout<<"List is Empty";

	}else {
		item = a[front];
		front ++;
	}

	return item;
}

void display()
{
for (int i = front ; i<rear; i ++)
{
cout <<a[i];

}

}

