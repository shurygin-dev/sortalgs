#ifndef sortmethod_selection_h
#define sortmethod_selection_h

#include "ArrayToSort.h"

class ArrayToSelectionSort: public ArrayToSort {
    public:
        void sort();
        using ArrayToSort::ArrayToSort;
};

#endif
