/*
 ============================================================================
 Name        : reversedArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int reversedArray(int[], int[]);

int main(void) {
	const int SIZE = 10;
	int integers[SIZE];
	int *reversedArr;
	int size;

	printf("enter 10 integers for the array: \n");
	for(int i = 0; i < SIZE; i++){
		scanf("%d", integers[i]);
	    printf("\n");
	}
	printf("elements of the original array: ");
	for(int i = 0; i < SIZE; i++){
		printf(integers[i]);
		printf("\n");
	}
	reversedArr = reversedArray(integers, SIZE);
	printf("elements in the reversed array: ");
	for(int i = 0; i < SIZE; i++){
		printf(reversedArr[i]);
		printf("\n");
	}
	return 0;
}
int *reversedArr(int integersArray[], int arraySize){
	int *newArray[arraySize];

	int j = 0;
	for(int i = arraySize-1; i >= 0; i--){
		newArray[j] = integersArray[i];
		j++;
	}
	return newArray;
}
