/**
 * @file algorithm-coding/01sort/sort.hpp
*/
#ifndef SORT__SORTER_HPP_
#define SORT__SORTER_HPP_

#include <stdio.h>
#include <string>

namespace lu
{

class Sorter
{
public:
    virtual
    void
    sort(void * arr, int begin, int end) = 0;
}; // class Sorter

} // namespace lu

#endif // SORT__SORTER_HPP_
