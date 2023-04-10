#include <iostream>

// function prototypes
int partition(int arr[], int lb, int ub);
void quickSort(int arr[], int lb, int ub);


// sort the partitioned array
// lb = LOWER BOUND
// ub = UPPER BOUND
void quickSort(int arr[], int lb, int ub) {
	if (lb < ub) {
		int loc = partition(arr, lb, ub); // partition the array
		quickSort(arr, lb, loc - 1); // sort the left partition
		quickSort(arr, loc + 1, ub); // sort the right partition
	}
}

int partition(int arr[], int lb, int ub) {
	int pivot = arr[lb]; // set pivot as the first element
	int start = lb;
	int end = ub;

	// swapping process
	// stop when end is greater than start
	while (start < end) {
		
		// stop when value of start is greater than pivot value
		while (arr[start] <= pivot) {
			start++;
		}

		// stop when value of end is less than or equal to pivot value
		while (arr[end] > pivot) {
			end--;
		}

		// swap when start index is less than the end index
		if (start < end) {
			std::swap(arr[start], arr[end]);
		}
	}

	// after the swapping process, swap the pivot and the value of end index
	std::swap(arr[lb], arr[end]);
	return end;
}

int main() {
	const int SIZE = 9;
	int myArr[SIZE] = { 7, 20, 6, 2, 11, 4, 1, 3, 10 };

	quickSort(myArr, 0, SIZE - 1);

	std::cout << "Sorted Array: ";
	for (int i = 0; i < SIZE; i++) {
		std::cout << myArr[i] << " ";
	}

	std::cout << "\n";
	return 0;
}
