#include <iostream>

void insertionSort(int arr[], size) {
	// check each element
	for (int pass = 1; pass < SIZE; pass++) {
		int key = arr[pass];
		int j = pass - 1;

		// find the right position
		while (j >= 0 && temp < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}

		// insert the key after finding the right position
		arr[j + 1] = key;
	}
}

int main() {
	const int SIZE = 6;
	int arr[SIZE] = { 5, 4, 10, 1, 6, 2 };

	insertionSort(arr, SIZE);

	std::cout << "Sorted Array: ";
	for (int i = 0; i < SIZE; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}