#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "HighArray.h"

class InsertionSort
{
public:
    InsertionSort();
    static void sort(HighArray& array);

private:
    // Insert the array[stop] element in the 'index' position and
    // shift all elements from 'index'+1 to 'stop'.
    static void shift(HighArray& array, int index, int stop);

    // find the index where 'value' should be between 0 and 'stop'.
    static int findCorrectPlace(HighArray& array, double value, int stop);
};

#endif // INSERTIONSORT_H
