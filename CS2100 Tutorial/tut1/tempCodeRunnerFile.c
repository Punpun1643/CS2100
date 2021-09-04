void reverseArray(int arr[], int size) {
	helperReverse(arr, 0, size - 1);
}

void helperReverse(int arr[], int left, int right) {
	int temp;
	if (left < right) {
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		helperReverse(arr, left+1, right-1);
	}
}