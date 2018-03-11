//To run this program : 
//use: g++ nutanix.cpp -o nutanix.out -g 


#include <stdio.h>

#define true 1
#define false 0

//Input 1 : Set of integers 
// Input 2 = SUM
// Subset within a set whose values add up to SUM, where SUm is the second input
//e.g. Input 1 = {1, 6, 4} SUM = 22

void FindSubsetWithinList( int *input, int sum, int start, int end, int &found);
void swap (int *input, int x , int y );
int AdditionOfList(int *input, int x , int y );
int main ()
{

	int input [] = {20,21,22} ;
	int sum = 41;
	int length = sizeof(input)/sizeof(input[0]);
	int flag= false;
	//Few Use cases to be considered;
	///// Assuming input has atleast one element;
	///// Assuming input can not have negative values;

	if (length == 1 && sum == input[0])
	{
		printf("\nsubset is present");
		return 0;
	}
	FindSubsetWithinList(input, sum, 0, length, found);
	
	if (found)
	{
		printf("\nSubset found");
		return 0;
	}
	printf("\nNo subset found");
	return 1;
}

void FindSubsetWithinList( int *input, int sum, int start, int end, int &found)
{
	int i;
	if ( found == true)
		return;
	if ( start == end)
	{
		if (sum == input[start])
			found = true;
			return;
	}
	if ( sum == AdditionOfList(input, start, end))
	{
		found = true;
		return;
	}
	for (i = start; i <end; i++  )
	{
		swap(input, start, i);
		FindSubsetWithinList( input, sum, start+1, end, found);
		swap (input, start,i);
	}
}

void swap (int *input, int x , int y )
{
	int temp = input[x];
	input[x] = input[y];
	input[y] = temp;
}


int AdditionOfList(int *input, int x , int y )
{
	int sum =0;
	for (;x <y; ++x )
	{
		sum += input[x];
	}    
	return sum;
}


