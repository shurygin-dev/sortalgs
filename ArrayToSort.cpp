#include "ArrayToSort.h"

using namespace std;

ArrayToSort::ArrayToSort() {
    nums_count = 0;
}

ArrayToSort::ArrayToSort(int nums_count) {
    this->nums_count = nums_count;
    this->numbers = new int[this->nums_count];
}

ArrayToSort::~ArrayToSort() {
    delete this->numbers;
}

void ArrayToSort::print() {
    for(int i = 0; i < this->nums_count; i++) {
        cout << setw(3) << right << this->numbers[i] << " ";
    }

    cout << endl;
}
