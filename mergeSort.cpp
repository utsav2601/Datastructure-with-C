#include "Sort.h"

//int a[7] = {6,2,9,4,8,7,1};
void merge(int a[],int start, int mid, int end)
{

int temp[end-start +1];
//i -> left array
//j -> right arr0ay
//k -> main array

int i=start,j= mid+1,pos = 0;
while(i <=mid && j <=end)
{
	if(a[i] <= a[j])
	{
		temp[pos] = a[i];
		i++;
	}else
	{
		temp[pos] = a[j];
		j++;
	}
pos++;
}

while(i <= mid)
{
	temp[pos] = a[i];
	pos++; i++;

}
while(j <= end)
{
temp[pos] = a[j];
pos++;j++;
}

for (int i =0;i <pos;i++){

	a[start+i] = temp[i];
}

}

void mergeSort(int a[], int start, int end)
{

if(start < end)
{
int mid = (start+end)/2;
mergeSort(a,start,mid);
mergeSort(a,mid+1,end);
merge(a,start,mid,end);
}

}
