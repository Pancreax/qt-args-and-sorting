#include "MergeSort.h"
#include <QDebug>

MergeSort::MergeSort()
{

}

bool MergeSort::firstTime = true;

void MergeSort::sort(HighArray& array)
{
    if(firstTime)
    {
        qDebug() << "Sorting with MergeSort!\n";
        firstTime = false;
    }

    if(array.getCount()>1)
    {
        HighArray A;
        HighArray B;
        divide(array,A,B);

        A.printArray();
        B.printArray();

        sort(A);
        sort(B);
        merge(A,B,array);
        array.printArray();
    }
}

void MergeSort::divide(HighArray array,HighArray& A, HighArray& B)
{
    int i;
    int halfCount = array.getCount()/2;
    for(i = 0; i<halfCount;i++)
    {
        A.insertElement(array.getElement(i));
    }
    for(i=halfCount;i<array.getCount();i++)
    {
        B.insertElement(array.getElement(i));
    }
}

void MergeSort::merge(HighArray& A, HighArray& B, HighArray& C)
{
    int idxa = 0;
    int idxb = 0;
    C.clear();
    while(idxa < A.getCount() && idxb < B.getCount())
    {
        if(A.getElement(idxa) < B.getElement(idxb))
        {
            C.insertElement(A.getElement(idxa++));
        }
        else
        {
            C.insertElement(B.getElement(idxb++));
        }
    }
    while(idxa < A.getCount()) C.insertElement(A.getElement(idxa++));
    while(idxb < B.getCount()) C.insertElement(B.getElement(idxb++));
}
