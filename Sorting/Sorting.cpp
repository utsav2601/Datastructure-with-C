#include <iostream>
#include "Sort.h"
using namespace std;

//Array declared in Sort
int size =7;
int a[7] = {6,2,9,4,8,7,1};


int main()
{

//cout<<"NO"<<x;
	//bubbleSort();
	//insertSort();
	//selectionSort();
	//mergeSort(a,0,6);
	quickSort(a,0,6);
for (int i =0;i<size ; i++)
	{
		cout<<a[i];

	}

return 0;
}
