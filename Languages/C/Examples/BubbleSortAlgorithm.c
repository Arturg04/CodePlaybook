#include <stdio.h>

void static BubbleSort(int arr[], int n) {
	int i = 0, j = 0, temp = 0;

	while (i < n) {
		j = 0;
		while (j < n - i - 1) {
			if (arr[j] > arr[j + 1]) {
				// Swap
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
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
