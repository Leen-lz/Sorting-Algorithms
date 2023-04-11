# Sorting Algorithms in CPE 4

This repository compiles all the sorting algorithms in C++ Language used in course CPE 4: Data Structure and Algorithms. <br> <br>

### DESCRIPTION FOR EACH ALGORITHM

## ⏭ Bubble Sort
This sorting algorithm moves the greater value to the last index through **swapping**.

## ⏭ Insertion Sort
This sorting algorithm uses to iterate each element as key. The key value is swapped to the **_left_** until it reached to its proper place. <br>
When the key is swapped to the left, values before it are shifted to the **_right_**.

## ⏭ Shell Sort
This sorting algorithm swaps two elements between what we call a ***gap***. The gap is calculated by dividing the size of array by two. After swapping, the gap is
now divided by 2^2 ... n^2. When the gap = 1, apply ***insertion sort***.

## ⏭ Heap Sort
This sorting algorithm follos the *maximum heap property* of *binary tree* data structure. The value of the node is greater than its value of its child.
The array needs to undergo ***heapify process*** (max heap) then apply ***heap deletion*** for each element.

## ⏭ Merge Sort
A divide and conquer sorting algorithm where the array is divided into two until the size of the array is **1**. <br>
Then use the ***merging process*** to combine the divided array. If the size is 2 during merging, compare only the two elements.

## ⏭ Quick Sort
A divide and conquer sorting algorithm that uses a lower bound (first element), upper bound (last element), and pivot as varibles. The pivot is the lower bound.
Then we partition the array into two, where left partition values < pivot value > right partition values. Apply recursion to each partition until array size = **1**.

## ⏭ Bucket Sort

## ⏭ Radix Sort

<br>
<br>

### SPACE AND TIME COMPLEXITIES

![timeComplexity](https://lamfo-unb.github.io/img/Sorting-algorithms/Complexity.png)
