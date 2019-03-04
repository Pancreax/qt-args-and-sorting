#ifndef HIGHARRAY_H
#define HIGHARRAY_H


class HighArray
{
public:
    HighArray();
    void clear();
    int getCount();
    void insertElement(double value);
    double getElement(int index = 0); // In c++ we can have default values for parameters!
    void setElement(int index, double value);
    void printArray();

private:
    double vec[100];
    int count;
};

#endif // HIGHARRAY_H
