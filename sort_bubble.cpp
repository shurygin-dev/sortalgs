#include <iostream>
#include "sortmethod_bubble.h"

using namespace std;

int main(int argc, char* argv[]) {

    printf("Bubble sort\n\n");

    ArrayToBubbleSort* arr = new ArrayToBubbleSort(30);
    arr->generate();

    arr->print();
    arr->sort();
    arr->print();

    delete arr;

    return 0;
}
