#include <iostream>


void bubbleSort(int arr[], int size) {

	// let i as first element
	for (int i = 0; i < size; i++) {
		
		// let j as the next element after i
		for (int j = i + 1; j < size; j++) {

			// when the i element is greater than its next, swap
			if (arr[i] > arr[j]) {
				std::swap(arr[j], arr[i]);
			}
		}
	}
}

int main() {
	const int SIZE = 9;
	int myArr[SIZE] = { 1, 43, 2, 32, 10, 9, 6, 4, 7, };

	bubbleSort(myArr, SIZE);

	std::cout << "Sorted Array: ";
	for (int i = 0; i < SIZE; i++) {
		std::cout << myArr[i] << " ";
	}

	std::cout << "\n";
	return 0;
}