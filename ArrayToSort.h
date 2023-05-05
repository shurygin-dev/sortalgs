#ifndef ArrayToSort_h
#define ArrayToSort_h

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

class ArrayToSort {
    public:
        int* numbers;
        int nums_count;
        //void generate();
        void print();
        ArrayToSort();
        ~ArrayToSort();
        ArrayToSort(int);
};

#endif
