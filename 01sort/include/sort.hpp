/**
 * @file algorithm-coding/01sort/sort.hpp
*/

#include <stdio.h>
#include <string>

template<typename DataT>
void
swap(DataT & a, DataT & b) {
    DataT t = a;
    a = b;
    b = t;
}

template<typename DataT>
void
print_arr(char * title, DataT arr[], int size) {
    printf("%s\n", title);
    for(int i = 0; i < size; i++) {
        printf("%s ", std::to_string(arr[i]).c_str());
    }
    printf("\n");
}