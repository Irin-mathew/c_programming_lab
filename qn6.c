#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void merge(int array[], int start, int mid, int end) {
    int i = start, j = mid + 1, k = 0;
    int temp[end - start + 1];

    while (i <= mid && j <= end) {
        if (array[i] < array[j]) {
            temp[k++] = array[i++];
        } else {
            temp[k++] = array[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = array[i++];
    }

    while (j <= end) {
        temp[k++] = array[j++];
    }

    for (i = 0; i < k; i++) {
        array[start++] = temp[i];
    }
}

void mergeSort(int array[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);

        merge(array, start, mid, end);
    }
}

int linearSearch(int array[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int array[SIZE] = {20, 35, 12, 16, 9, 28, 1, 10, 30, 33};
    int n = sizeof(array) / sizeof(array[0]);
    int x;

    printf("Enter a number to search: ");
    scanf("%d", &x);

    mergeSort(array, 0, n - 1);

    if (linearSearch(array, n, x)) {
        printf("%d is present in the array.\n", x);
    } else {
        printf("%d is not present in the array.\n", x);
    }

    return 0;
}