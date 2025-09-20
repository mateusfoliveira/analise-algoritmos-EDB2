#include <iostream>
#include <vector>
#include "algoritmosBusca.h"
#include "medirTempo.h"
int main (){

    std::cout << "--- Bem vindo ao teste de algoritmos!--- \nEscolha uma das opcoes: \n";
    std::cout << "1 - Medir busca (vetor ordenado e pior caso)\n" << "2 - Medir ordenacao\n" << "3 - Encerrar execucao\n";

    int entrada;
    
    std::cin >> entrada;

    switch(entrada){
        case 1:
            measureSearch(sequencialSearch, "Busca Sequencial");
            break;
        case 2:
            break;
        case 3:
            break;



    }

    return 0;
}