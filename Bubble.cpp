#include "Sort.h"


//Function for bubble sort
using namespace std;


void bubbleSort()
{


	for (int i =0;i < size-1; i++)
	{
		for (int j = 0;j < size-i-1; j++)
		{
		if (a[j] > a[j+1])
		{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
		}
		}
	}



}

