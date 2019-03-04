#ifndef MERGESORT_H
#define MERGESORT_H

#include "HighArray.h"

class MergeSort
{
public:
    MergeSort();
    static void sort(HighArray& array);

private:
    static bool firstTime;
    static void merge(HighArray& A, HighArray& B, HighArray& C);
    static void divide(HighArray array,HighArray& A, HighArray& B);
};

#endif // MERGESORT_H
