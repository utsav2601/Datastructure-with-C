#include "Sort.h"
//Selection Sort
void selectionSort()
{

	int iMin,j;
	for(int i =0;i< size ; i++)
	{
		iMin = i;
		j = i+1;
		while(j < size)
		{
			//cout<<"p1c";
			if(a[iMin] > a[j])
			{
				iMin = j;
			}
			j++;

		}
		if(iMin !=i)
		{
			int temp = a[iMin];
			a[iMin] = a[i];
			a[i] = temp;

		}

	}



//	int iMin;
//	for (int i =0; i<size-1;i++)
//	{
//		iMin = i;
//
//		for(int j = i+1 ; j < size;j++)
//		{
//			if(a[iMin] > a[j])
//			{
//				iMin = j;
//			}
//
//		}
//if(iMin != i )
//{
//	int temp = a[i];
//a[i] = a[iMin];
//a[iMin] = temp;
//
//}
//	}


}
