#include "sortmethod_selection.h"

void ArrayToSelectionSort::sort() {
    for(int i = 0; i < this->nums_count; i++) {
        int min;
        int min_found = 0;
        for(int j = i; j < this->nums_count; j++) {
            if(!min_found || min > this->numbers[j]) {
                min_found = 1;
                min = this->numbers[j];
                int t = this->numbers[i];
                this->numbers[i] = min;
                this->numbers[j] = t;
            }
        }
    }
}
