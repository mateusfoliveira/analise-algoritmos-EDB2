#include <vector>


std::vector <int> gerarVetorOrdenado(int entrada){

    std::vector <int> vetor;
    for(int i = 0; i < entrada; i++){
        vetor.push_back(i+1);
    }

    return vetor;
}

std::vector <int> gerarVetorDesordenado(int entrada){

    std::vector <int> vetor;
    for(int i = 0; i < entrada; i++){
        vetor.push_back(i);
    }

    return vetor;
}