#include <vector>
#include <random>
#include <chrono>

std::vector <int> gerarVetorOrdenado(int entrada){

    std::vector <int> vetor;
    for(int i = 0; i < entrada; i++){
        vetor.push_back(i+1);
    }

    return vetor;
}

std::vector <int> gerarVetorDesordenado(int entrada){

    std::vector <int> vetor;
    
    unsigned long seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();

    std::mt19937 gerador(seed);

    std::uniform_int_distribution<int> distribuicao(0, entrada);


    for(int i = 0; i < entrada; i++){
        vetor.push_back(distribuicao(gerador));
    }

    return vetor;
}