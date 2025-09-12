#include <iostream>
#include <vector>
#include <chrono>

void measureSearch(){

    std::vector <int> vetor;
    std::vector <long long int> tempo;

        for(int i = 0; i < 100; i++){
            vetor.push_back(i+1);
        }

        for(int m = 0; m < 5; m++){

            auto start = std::chrono::high_resolution_clock::now();

            //Busca

            auto end = std::chrono::high_resolution_clock::now();

            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
            tempo.push_back(duration.count());
        }

        long long int media = 0;

        for(long long int i:tempo){

            media += i;

        }

        std::cout << "Tempo medio: " << static_cast<double> (media)/tempo.size() << " ms \n";
}

int main(){


    measureSearch();
}
