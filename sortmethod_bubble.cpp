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
}
