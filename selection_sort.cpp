#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]) {
    srand(time(NULL));

    int nums_count = 30;
    int* nums = new int[nums_count];

    for(int i = 0; i < nums_count; i++) {
        nums[i] = rand() % 200 - 100;
        cout << nums[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < nums_count; i++) {
        int min;
        int min_found = 0;
        for(int j = i; j < nums_count; j++) {
            if(!min_found || min > nums[j]) {
                min_found = 1;
                min = nums[j];
                int t = nums[i];
                nums[i] = min;
                nums[j] = t;
            }
        }
    }

    for(int i = 0; i < nums_count; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;


    delete nums;

    return 0;
}

