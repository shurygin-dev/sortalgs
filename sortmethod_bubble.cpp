#include "sortmethod_bubble.h"

void ArrayToBubbleSort::sort() {
    int counter = this->nums_count;

    while(counter--) {
        bool swapped = false;

        for(int i = 0; i < counter; i++) {
            if(this->numbers[i] > this->numbers[i+1]) {
                int temporary = this->numbers[i+1];
                this->numbers[i+1] = this->numbers[i];
                this->numbers[i] = temporary;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
    /*
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
    }  */
}
