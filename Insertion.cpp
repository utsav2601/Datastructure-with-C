#include "Sort.h"


//int a[7] = {6,2,9,4,8,7,1};
using namespace std;
void insertSort()
{

for (int i =1; i < size;i ++)
{
	int temp = a[i];
	int index = i;
	while( index > 0 && temp < a[index-1])
	{
		a[index] = a[index-1];
		index--;
	}
	a[index] = temp;

}


}
