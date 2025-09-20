#include <iostream>
#include <vector>
#include "algoritmosBusca.h"

int sequencialSearch(const std::vector <int> &vector, int find){

    for(int i = 0; i < vector.size(); i++){

        if(vector[i] == find) return i;
        
    }

    return -1;
}

int binarySearch(const std::vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1;
}
