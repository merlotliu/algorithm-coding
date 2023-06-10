/**
 * @file algorithm-coding/01sort/quick_sort.cpp
*/

#include "sort.hpp"

template<typename DataT>
void
quick_sort(DataT arr[], int size, int left, int right) {
    // printf("%d %d\n", left, right);  
    if(left < 0 || right > size - 1 || left >= right) return;

    DataT pivot = arr[left];
    int i = left, j = right;
    while(i != j) {
        while(arr[j] <= pivot && i < j) j--;
        while(arr[i] >= pivot && i < j) i++;
        swap(arr[i], arr[j]);
    }
    swap(arr[left], arr[i]);

    quick_sort(arr, size, left, i - 1);
    quick_sort(arr, size, i + 1, right);
}

int 
main(int argc, char const *argv[]) {
    int arr[] = {8, 100, 50, 22, 15, 6, 1, 1000, 999, 0};
    const int size = sizeof(arr) / sizeof(int);
    print_arr("origin array :", arr, size);
    quick_sort(arr, size, 0, size - 1);
    print_arr("sorted array :", arr, size);
    return 0;
}
