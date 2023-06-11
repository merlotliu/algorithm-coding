/**
 * @file algorithm-coding/01sort/main.cpp
*/
#include "bubble_sorter.hpp"
#include "quick_sorter.hpp"

int 
main(int arc, char * agrv[]) {
    int arr[] = {8, 100, 50, 22, 15, 6, 1, 1000, 999, 0};
    const int size = sizeof(arr) / sizeof(int);
    lu::print_arr("Origin", arr, size);

    lu::sort(arr, 0, size, new lu::BubbleSorter<int>());
    lu::print_arr("BubbleSort", arr, size);

    lu::sort(arr, 0, size, new lu::QuickSorter<int>());
    lu::print_arr("QuickSort", arr, size);
    return 0;
}