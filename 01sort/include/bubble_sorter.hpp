/**
 * @file algorithm-coding/01sort/bubble_sorter.hpp
*/
#ifndef SORT__BUBBLE_SORTER_HPP_
#define SORT__BUBBLE_SORTER_HPP_

#include "utils.hpp"
#include "sorter.hpp"

namespace lu
{

template<typename DataT>
class BubbleSorter : public Sorter
{
public:
    virtual
    void
    sort(void * arr, int begin, int end) {
        bubble_sort((DataT*)arr, begin, end);
    }

protected:
    void
    bubble_sort(DataT * arr, int begin, int end) {
        for(int i = end; i > begin; i--) {
            for(int j = begin+1; j < i; j++) {
                if(arr[j-1] < arr[j]) {
                    swap(arr[j-1], arr[j]);
                }
            }
        }
    }
}; // class BubbleSorter

} // namespace lu

#endif // SORT__BUBBLE_SORTER_HPP_
