/*
 * Bubble.h
 *
 *  Created on: Nov 11, 2014
 *      Author: utsav
 */

#ifndef BUBBLE_H_
#define BUBBLE_H_
//For bubble Sort
#include <iostream>
using namespace std;

//Declare array in any one header file
//Bubble.cpp
	extern int size;
	extern int a[7];
void bubbleSort();
void insertSort();
void selectionSort();
void mergeSort(int a[], int first, int end);
void quickSort(int a[],int first,int end);
#endif /* BUBBLE_H_ */
