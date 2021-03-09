
// =================== Libraries ==================
#include <stdio.h> // Include file for standard input/output

// =============== Helper Functions ===============

// Swaps two numbers in an array
// Input: The 'address of' an index into an array for positions in an array.
void swap(int* a, int* b){
    int swapTemp = *a;
    *a = *b;
    *b = swapTemp;
}


// Name: bubbleSort
// Input(s):
//          (1) 'array' is a pointer to an integer address. 
//              This is the start of some 'contiguous block of memory' that we will sort.
//          (2) 'size' tells us how big the array of data is we are sorting.
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.
void bubbleSort(int* array, unsigned int size){
    int sortedMarker = 1;
    for (int i = 1; i < size; i++) {
        for (int t = sortedMarker; t > 0; t--) {
            if (array[t] < array[t-1]) {
                swap(&array[t-1], &array[t]);
            }
            else {
                break;
            }
        }
        sortedMarker += 1;
    }
}


// Input: A pointer to an array (i.e. the array itself points to the first index)
//        The size of the array (Because we do not know how big the array is automatically)
void printIntArray(int* array, unsigned int size) {
    unsigned int i; // Note: 'unsigned int' is a datatype for storing positive integers.
    for(i = 0; i < size; i=i+1){
        printf("%d ",array[i]);
    }
    printf("\n");
}

