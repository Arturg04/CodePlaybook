#include <stdio.h>


// Uncomment the line below to enable debug mode
// #define DEBUG

// Bubble sort algorithm
// Sorting in ascending order
// The algorithm compares each pair of adjacent elements and swaps them if they are in the wrong order
// The pass through the list is repeated until no swaps are needed
void static BubbleSort(int arr[], int n) {
	int i = 0, j = 0, temp = 0;

	while (i < n) {
		j = 0;
		while (j < n - i - 1) {
			if (arr[j] > arr[j + 1]) 
			{
				if (DEBUG) printf("Swap %d and %d\n", arr[j], arr[j + 1]);
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;

		}
		if (DEBUG) {
			printf("Pass %d: ", i);
			for (int k = 0; k < n; k++) printf("%d ", arr[k]);
			printf("\n");
		}
		i++;
	}
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

	BubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
