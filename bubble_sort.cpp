#include <iostream>
#include "ArrayToSort.h"

using namespace std;

void bubblesort(int list[], int nums_count);

int main(int argc, char* argv[]) {

    ArrayToSort* arr = new ArrayToSort(30);
    arr->generate();
    arr->print();

    for(int i = 0; i < arr->nums_count; i++) {
        int min;
        int min_found = 0;
        for(int j = i; j < arr->nums_count; j++) {
            if(!min_found || min > arr->numbers[j]) {
                min_found = 1;
                min = arr->numbers[j];
                int t = arr->numbers[i];
                arr->numbers[i] = min;
                arr->numbers[j] = t;
            }
        }
    }

    arr->print();

    delete arr;

    return 0;
}

void bubblesort(int list[], int nums_count) {
    while(nums_count--) {
        bool swapped = false;
        for(int i = 0; i < nums_count; i++) {
            if(list[i] > list[i+1]) {
                int t = list[i];
                list[i] = list[i+1];
                list[i+1] = t;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}
