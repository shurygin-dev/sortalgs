#include <iostream>
#include "sortmethod_selection.h"

using namespace std;

int main(int argc, char* argv[]) {

    printf("Selection sort\n\n");

    ArrayToSelectionSort* arr = new ArrayToSelectionSort(30);
    arr->generate();

    arr->print();
    arr->sort();
    arr->print();

    delete arr;

    return 0;
}
