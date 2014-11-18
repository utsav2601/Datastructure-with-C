/*
 * quickSort.cpp
 *
 *  Created on: Nov 11, 2014
 *      Author: utsav
 */

 //{6,2,9,4,8,7,1};
int partition(int a[], int first, int last)
{
int pivot = first;
int pivotVal = a[first];
int l = first+1;
int r = last;
int temp;
while (l <=r)
{
	while(a[l] < pivotVal)
	{
		l++;
	}
	while(a[r] > pivotVal)
	{
	r--;
	}
if(l < r)
{
temp = a[l];
a[l] = a[r];
a[r] = temp;

}
}
a[pivot] = a[r];
a[r] = pivotVal;
return r;



}

void quickSort(int a[], int first , int last)
{
	int index;
	if(first < last)
	{
		index =  partition(a,first, last);
		quickSort(a,first, index-1);
		quickSort(a,index+1, last);

	}


}


