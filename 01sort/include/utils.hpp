/**
 * @file algorithm-coding/01sort/sort.hpp
*/
#ifndef SORT__UTILS_HPP_
#define SORT__UTILS_HPP_

#include <stdio.h>
#include <string>

namespace lu
{
class Sorter;

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

void
sort(void * arr, int begin, int end, Sorter * sorter);

} // namespace lu

#endif // SORT__UTILS_HPP_
