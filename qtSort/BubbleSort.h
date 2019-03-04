#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "HighArray.h"

class BubbleSort
{
public:
    BubbleSort();
    static void sort(HighArray& array);

private:
    static void swap(HighArray& array, int idx1, int idx2);
};

#endif // BUBBLESORT_H
