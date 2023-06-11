/**
 * @file algorithm-coding/01sort/utils.cpp
*/

#include "utils.hpp"
#include "sorter.hpp"

namespace lu
{

void
sort(void * arr, int begin, int end, Sorter * sorter) {
    sorter->sort(arr, begin, end);
}

} // namespace lu
