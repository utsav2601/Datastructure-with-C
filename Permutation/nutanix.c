//Usage:
//gcc nutanix.c -o nutanix.out -g
//./nutanix.out

//Input 1 : Set of integers 
// Input 2 = SUM
// Subset within a set whose values add up to SUM, where SUm is the second input
//e.g. Input 1 = {1, 6, 4} SUM = 22

//Thinking: Problem states that for any given permutation find the sum 
// so we try to find out all the permutation of the given array 
// and see if the sum of given permutation at any give instance is equal to sum or not 
// we used to recursion to find all the possible permutation and if found we get back from stack frames

//Few Use cases to be considered;
///// Assuming input has atleast one element;
///// Assuming input can not have negative values;

#include <stdio.h>

#define true 1
#define false 0

void FindSubsetWithinList( int* input, int sum, int start, int end, int *found);
void swap (int *input, int x , int y );
int AdditionOfList(int *input, int x , int y );
int main ()
{
	int input [] = {20,21,22} ;
	int sum = 52;
	int length = sizeof(input)/sizeof(input[0]);
	int flag = false;
	int *found = &flag;
	if (length == 1 && sum == input[0])
	{
		printf("\nsubset is present");
		return 0;
	}
	FindSubsetWithinList(input, sum, 0, length, found);

	if (*found)
	{
		printf("\nSubset found");
		return 0;
	}
	printf("\nNo subset found");
	return 1;
}

void FindSubsetWithinList( int *input, int sum, int start, int end, int* found)
{
	int i;
	if ( *found == true)
		return;
	if ( start == end)
	{
		if (sum == input[start])
		{
			*found = true;
			return;
		}
	}
	if ( sum == AdditionOfList(input, start, end))
	{
		*found = true;
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
