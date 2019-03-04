#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "HighArray.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "ArgumentHandling.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCoreApplication::setApplicationVersion(ArgumentHandling::program_version);

    if(!ArgumentHandling::parseArgs(a))
        a.exit(0);

    std::cout << ArgumentHandling::header.toStdString();

    std::cout << "The selected sorting algorithm is: " << ArgumentHandling::getSortingAlgorithm().toStdString() << "\n\n";

    HighArray myNumberList;

    // insert some unsorted data
    myNumberList.insertElement(11);
    myNumberList.insertElement(88);
    myNumberList.insertElement(22);
    myNumberList.insertElement(66);
    myNumberList.insertElement(55);
    myNumberList.insertElement(44);
    myNumberList.insertElement(33);
    myNumberList.insertElement(99);

    myNumberList.printArray();

    // Testing the param with default value:
    qDebug() << "Getting the element 3: " << myNumberList.getElement(3);
    qDebug() << "Getting the element unespecified: " << myNumberList.getElement();

    std::cout << "Sorting the array:\n";

    if(!QString::compare(ArgumentHandling::getSortingAlgorithm(), QString(ArgumentHandling::option_bubble_sort), Qt::CaseInsensitive))
        BubbleSort::sort(myNumberList);
    if(!QString::compare(ArgumentHandling::getSortingAlgorithm(), QString(ArgumentHandling::option_insertion), Qt::CaseInsensitive))
        InsertionSort::sort(myNumberList);
    if(!QString::compare(ArgumentHandling::getSortingAlgorithm(), QString(ArgumentHandling::option_merge_sort), Qt::CaseInsensitive))
        MergeSort::sort(myNumberList);

    myNumberList.printArray();

    a.exit(0);
    return 0;
}
