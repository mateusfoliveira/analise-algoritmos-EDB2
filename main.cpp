#include <iostream>
#include <vector>
#include "algoritmosBusca.h"
#include "algoritmosOrdenacao.h"
#include "medirTempo.h"
int main (){

    std::cout << "--- Bem vindo ao programa de teste empirico de algoritmos!--- \n";
    std::cout << "O codigo vem com 4 algoritmos, caso queira mudar basta alterar a funcao no codigo e inserir o nome desejado.\n";
    std::cout << "Caso queira adicionar um algoritmo basta colar nos arquivos correspondentes ou adicionar e incluir ele no main.\n";
    std::cout << "---------------------------------------------------------------------------------------------------------------\n";
    std::cout << "Escolha uma das opcoes: \n1 - Medir busca (vetor ordenado e pior caso)\n" << "2 - Medir ordenacao\n" << "3 - Encerrar execucao\n";

    int entrada;
    
    std::cin >> entrada;

    switch(entrada){
        case 1:
            measureSearch(sequencialSearch, "Busca Sequencial");
            break;
        case 2:
            measureOrdenation(mergeSort, "Merge Sort");
            break;
        case 3:
            return 0;
            break;
    }

    return 0;
}