#include <stdio.h>

// A function to swap two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// A function to perform bubble sort
void bubbleSort(int array[], int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[j] > array[j + 1]) {
        // swapping elements if elements
        // are not in the intended order
        swap(&array[j], &array[j + 1]);
      }
    }
  }
}

// A function to print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}

