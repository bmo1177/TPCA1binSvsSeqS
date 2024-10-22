#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        array[i] = i + 10;
    }
}
int sequential_search(int array[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (array[i] == val) {
            return i;
        }
    }
    return -1;
}
int binary_search(int array[], int n, int val) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (array[mid] == val) {
            return mid;
        } else if (array[mid] > val) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

void measure_time(int (*search_func)(int[], int, int), int array[], int n, int val, const char *algorithm_name) {
    clock_t start, end;
    int repetitions = 100000;
    start = clock();
    for (int i = 0; i < repetitions; i++) {
        search_func(array, n, val);
    }
    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC / repetitions; // Average time per search
    printf("%s (Size: %d) - Average Time: %.12f seconds\n", algorithm_name, n, time_taken);
}
int main() {   int sizes[] = {1000, 10000, 100000, 1000000};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);
    for (int i = 0; i < num_sizes; i++) {
        int n = sizes[i];
        int *array = (int *)malloc(n * sizeof(int)); // Dynamic allocation
        fill_array(array, n);
        int search_value = array[n / 2];
        measure_time(sequential_search, array, n, search_value, "Sequential Search");
        measure_time(binary_search, array, n, search_value, "Binary Search");
        free(array);
    }

    return 0;
}
