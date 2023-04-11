#include <iostream>

void shellSort(int arr[], int size) {

	// this iterates until the gap is = 0
	// gap is the interval between i and j index
	for (int gap = size / 2; gap >= 1; gap /= 2) {

		// j is the second element key
		// i is the first element key
		for (int j = gap; j < size; j++) {
			
			// i is in a separate loop since it checks the values behind considering its gap
			for (int i = j - gap; i >= 0; i -= gap) {

				// if the value at index j is now in place, break then increment j
				if (arr[i + gap] > arr[i]) {
					break;
				}
				// else, swap until the the value at j index is at the right position (insertion)
				else {
					std::swap(arr[i + gap], arr[i]);
				}
			}
		}
	}
}

int main() {
	const int SIZE = 9;
	int myArr[SIZE] = { 3, 18, 2, 1, 10, 15, 98, 200, 34 };

	shellSort(myArr, SIZE);

	std::cout << "Sorted Array: ";
	for (int i = 0; i < SIZE; i++) {
		std::cout << myArr[i] << " ";
	}

	std::cout << "\n";
	return 0;
}