#include "HighArray.h"
#include <stdio.h>
#include <iostream>
#include <QDebug>

// Empty constructor, just initialize count to zero.
HighArray::HighArray() : count(0)
{
    qDebug() << "Creating vector";
}

void HighArray:: clear()
{
    count = 0;
}

int HighArray::getCount()
{
    return count;
}

void HighArray::insertElement(double value)
{
    qDebug() << "Inserting value " << value;
    vec[count++] = value;
}

double HighArray::getElement(int index)
{
    return vec[index];
}

void HighArray::setElement(int index, double value)
{
    vec[index] = value;
}

void HighArray::printArray()
{
    char auxString[200];
    int charCount = 0;
    charCount += sprintf(auxString + charCount,"Printing vector: ");
    for(int i = 0; i<getCount(); i++)
    {
        charCount += sprintf(auxString + charCount,"%2.0f ",vec[i]);
    }
    std::cout << auxString << "\n";
}
