#include "InsertionSort.h"
#include <QDebug>

InsertionSort::InsertionSort()
{

}

void InsertionSort::sort(HighArray &array)
{
    qDebug() << "Sorting with Insertion!\n";
    for(int i=1;i<array.getCount();i++)
    {
        int correctPlace = findCorrectPlace(array,array.getElement(i),i);
        shift(array,correctPlace,i);
    }
}

void InsertionSort::shift(HighArray &array, int index, int stop)
{
    double mValue = array.getElement(stop);
    for(int i= stop; i>index; i--)
    {
        array.setElement(i,array.getElement(i-1));
    }
    array.setElement(index,mValue);
}

int InsertionSort::findCorrectPlace(HighArray &array, double value, int stop)
{
    int i;
    for(i = 0; i<stop; i++)
    {
        if(array.getElement(i) > value) break;
    }
    return i;
}



