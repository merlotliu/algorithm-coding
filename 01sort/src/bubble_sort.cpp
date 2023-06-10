/**
 * @file algorithm-coding/01sort/bubble.cpp
*/

#include "sort.hpp"

/**
 * 冒泡排序（从大到小）
*/
template<typename DataT>
void
bubble_sort(DataT arr[], int size) {
    for(int i = size; i > 0; i--) {
        for(int j = 1; j < i; j++) {
            if(arr[j-1] < arr[j]) {
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

int
main(int argc, char *agrv[]) {
    int arr[] = {8, 100, 50, 22, 15, 6, 1, 1000, 999, 0};
    const int size = sizeof(arr) / sizeof(int);
    print_arr<int>("origin array :", arr, size);
    bubble_sort<int>(arr, size);
    print_arr<int>("sorted array :", arr, size);
    return 0;
}