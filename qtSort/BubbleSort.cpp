#include "BubbleSort.h"
#include <QDebug>

BubbleSort::BubbleSort()
{
}

// You don't need to write that this method is static here because it's written in the .h
void BubbleSort::sort(HighArray& array)
{
    qDebug() << "Sorting with Bubble!\n";
    // Loops from the end to the start of the array
    for(int j = array.getCount()-1; j>1 ; j--)
    {
        //Loops from start to j (beyond  j, the array is garanteed to be sorted).
        for(int i = 0; i< j; i++)
        {
            if(array.getElement(i) > array.getElement(i+1))
            {
                swap(array,i,i+1);
            }
        }
    }
}

// putting the '&' here says that this function automatically will receive a reference
void BubbleSort::swap(HighArray& array, int idx1, int idx2)
{
    double aux = array.getElement(idx1);
    array.setElement(idx1,array.getElement(idx2));
    array.setElement(idx2,aux);
}
