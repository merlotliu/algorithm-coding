/**
 * @file algorithm-coding/01sort/quick_sorter.hpp
*/
#ifndef SORT__QUICK_SORTER_HPP_
#define SORT__QUICK_SORTER_HPP_

#include "utils.hpp"
#include "sorter.hpp"

namespace lu
{

template<typename DataT>
class QuickSorter : public Sorter
{
public:
    virtual
    void
    sort(void * arr, int begin, int end) {
        quick_sort((DataT*)arr, begin, end, begin, end - 1);
    }

protected:
    void
    quick_sort(DataT * arr, int begin, int end, int left, int right) {
        if(left < begin || right > end - 1 || left >= right) return;

        DataT pivot = arr[left];
        int i = left, j = right;
        while(i != j) {
            while(arr[j] <= pivot && i < j) j--;
            while(arr[i] >= pivot && i < j) i++;
            swap(arr[i], arr[j]);
        }
        swap(arr[left], arr[i]);

        quick_sort(arr, begin, end, left, i - 1);
        quick_sort(arr, begin, end, i + 1, right);
    }
}; // class QuickSorter

} // namespace lu

#endif // SORT__QUICK_SORTER_HPP_
