//@Author: Utsav Popli
//Datastructures using C
//Insertion sort on Linked list

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
	int info;
	node *nextLink;
};

node *head = NULL;

void addToList(int val);
void displayList();
int main()
{
	addToList(13);
	addToList(1);
	addToList(3);
	addToList(5);
	addToList(4);
	addToList(7);
	addToList(8);
displayList();

return 0;
}

void addToList(int val)
{

	if(head == NULL)
	{
		node *temp = (struct node *)malloc(sizeof(node));
		head  = temp;
		head->nextLink = NULL;
		head->info = val;
		return ;
	}

	node *current = head;

	while(current->nextLink != NULL)
	{
		current = current->nextLink;

	}
	node *temp = (struct node *)malloc(sizeof(node));
	temp->info = val;
	temp->nextLink = NULL;
	current->nextLink = temp;

}
void displayList()
{
	if(head==NULL)
		{
			cout<<"List is Empty";
			return;
		}
		node *temp = head;
		while(temp != NULL)
		{
			cout<<"Value is: "<<temp->info;
			temp = temp->nextLink;
		}

}

void insertionSort()
{
	//if the list is empty
	if(head == NULL)
	{
		cout<<"List is empty";
		return;

	}else if (head->nextLink == NULL)
	{
		cout <<"List contains only one item";
		return ;

	}else {
		node *sorted = head;	//sorted element
		node *unsorted; //unsorted element
		node *temp;
		node *trailcurrent, *current;
		while(sorted->nextLink !=NULL)
		{
			//case 1: if unsorted element is less than the first element, arrange the list
			unsorted = sorted->nextLink;
			if(unsorted->info < head->info)
			{
				sorted->nextLink = unsorted->nextLink ;
				unsorted->nextLink= head;
				head = unsorted;
			}else {

				trailcurrent = head;
				current = trailcurrent->nextLink;
				//case 2 : if the unsorted element has to be inserted between first and the sorted element
				while(current->info < unsorted->info)
				{
					trailcurrent = current;
					current = current->nextLink;
				}
				//make sure we are in between first and sorted element
				if(current !=unsorted)
				{
					//if we are between first and sorted element
					//then re arrange the node pointers;
					sorted->nextLink = unsorted->nextLink;
					unsorted->nextLink = current;
					trailcurrent->nextLink = unsorted;
				}else {
				//case 3 : if the list is sorted then take next element
				sorted = sorted->nextLink;

				}


			}



		}







	}





}
