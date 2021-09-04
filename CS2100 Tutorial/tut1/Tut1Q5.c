#include <stdio.h>
#define MAX 10

int readArray(int [], int);
void printArray(int [], int);
void reverseArray(int [], int);
void helperReverse(int [], int, int);

int main(void) {
	int array[MAX], numElements;

	numElements = readArray(array, MAX);
	reverseArray(array, numElements);
	printArray(array, numElements);

	return 0;
}

int readArray(int arr[], int limit) {
	int i, numInput;
	printf("Enter up to %d integers, terminating with a negative integer.\n", limit);
	
	i = 0;
	scanf("%d", &numInput);

	while (numInput >= 0) {
		arr[i] = numInput;
		i++;
		scanf("%d", &numInput);
	}

	return i;
}

//recursive 
// void reverseArray(int arr[], int size) {
// 	helperReverse(arr, 0, size - 1);
// }

// void helperReverse(int arr[], int left, int right) {
// 	int temp;
// 	if (left < right) {
// 		temp = arr[left];
// 		arr[left] = arr[right];
// 		arr[right] = temp;
// 		helperReverse(arr, left+1, right-1);
// 	}
// }
 
//iterative
void reverseArray(int arr[], int size) {
	int i = 0;
	int j = size - 1;
	int temp;
	while (i < j) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;

	}
}

void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

