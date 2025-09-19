#include <iostream>
#include <vector>
#include "algoritmosBusca.h"

int sequencialSearch(const std::vector <int> &vector, int find){

    for(int i = 0; i < vector.size(); i++){

        if(vector[i] == find) return i;
        
    }

    return -1;
}
