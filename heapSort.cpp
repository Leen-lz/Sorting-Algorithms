#include <iostream>

// heapify method, use max heap property tree
void maxHeapify(int arr[], int size, int i) {
	int largest = i;
	int left = 2 * i + 1; // left child index
	int right = 2 * i + 2; // right child index

	// if left child is greater, make it the largest
	if (left < size && arr[left] > arr[largest]) {
		largest = left;
	}

	// if right child is greater, make it the largest
	if (right < size && arr[right] > arr[largest]) { 
		largest = right;
	}

	// if largest is identified, swap
	// recursion until the last child
	if (i != largest) {
		std::swap(arr[i], arr[largest]);
		maxHeapify(arr, size, largest);
	}
}

// heap sort, heapify first
// each loop is size - 1 since we utilize index
void HeapSort(int arr[], int size) {

	// build max heap 
	for (int i = (size / 2) - 1; i >= 0; i--) {
		maxHeapify(arr, size, i);
	}

	// deletion of heap tree
	for (int i = size - 1; i >= 0; i--) {
		std::swap(arr[0], arr[i]);
		maxHeapify(arr, i, 0);
	}
}

// print the array
void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
}

int main() {
	const int SIZE = 7;
	int myArray[SIZE] = { 6, 40, 14, 62, 15, 2, 7 };

	std::cout << "Unsorted Array: \n";
	printArr(myArray, SIZE);

	// heap sort
	HeapSort(myArray, SIZE);

	std::cout << "\n\nSorted Array (using Heap Sort): \n";
	printArr(myArray, SIZE);

	std::cout << "\n";

	return 0;
}