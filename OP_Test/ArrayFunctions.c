#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void GenerateRandomNumbersInArray(int *array, int lengthOfArray) {
	for (int i = 0; i < lengthOfArray; i++) {
		array[i] = rand() % 101;
	}
}

int findMin(int *array, int lengthOfArray) {
	int minimalValue = array[0];
	for (int i = 1; i < lengthOfArray; i++) {
		if (array[i] < minimalValue) {
			minimalValue = array[i];
		}
	}
	return minimalValue;
}

int findMax(int *array, int lengthOfArray) {
	int maximumlValue = array[0];
	for (int i = 1; i < lengthOfArray; i++) {
		if (array[i] > maximumlValue) {
			maximumlValue = array[i];
		}
	}
	return maximumlValue;
}

double average(int *array, int lengthOfArray) {
	int sum = 0;
	for (int i = 0; i < lengthOfArray; i++) {
		sum += array[i];
	}
	return sum / lengthOfArray;
}

void printAnArray(int *array, int lengthOfArray) {
	for (int i = 0; i < lengthOfArray; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	int lengthOfArray;
	int *array;

	printf("Enter length of array: \n");
	scanf_s("%d", &lengthOfArray);

	array = malloc(sizeof(int) * lengthOfArray);

	GenerateRandomNumbersInArray(&array, lengthOfArray);

	printf("Minimal value in array is %d\n", findMin(&array, lengthOfArray));

	printf("Maximum value in array is %d\n", findMax(&array, lengthOfArray));

	printf("Avarage of array is %lf\n", average(&array, lengthOfArray));

	printAnArray(&array, lengthOfArray);
	
	free(array);
	system("pause");
	return 0;
}