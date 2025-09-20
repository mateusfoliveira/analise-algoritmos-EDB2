#include <iostream>
#include <vector>
#include <chrono>
#include <functional>
#include "gerarVetor.h"

void measureSearch(std::function<int(const std::vector <int> &vector, int find)> algoritmoBusca, std::string nomeDaBusca){

    int n = 100;

    std::cout << "--- Medicao de " << nomeDaBusca << " ---\n";

    std::cout << "Numero de entradas | Tempo medio:\n";

    for(int i = 0; i < 5; i++){

    std::vector <int> vetor = gerarVetorOrdenado(n);
    std::vector <long long int> tempo;

        for(int m = 0; m < 5; m++){

            auto start = std::chrono::high_resolution_clock::now();

            algoritmoBusca(vetor, -1);

            auto end = std::chrono::high_resolution_clock::now();

            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
            tempo.push_back(duration.count());
        }

        long long int media = 0;

        for(long long int a:tempo){

            media += a;

        }

        std::cout << "-Teste " << i+1 << ": "<< n << " | " << static_cast<double> (media)/tempo.size() << " microssegundos \n";

        n *= 10;

    }
}

void measureOrdenation(std::function<void(const std::vector <int> &vector)> algoritmoOrdenacao, std::string nomeDoAlgoritmo){

    int n = 100;

    std::cout << "--- Medicao de " << nomeDoAlgoritmo << " ---\n";

    std::cout << "Numero de entradas | Tempo medio:\n";

    for(int i = 0; i < 5; i++){

    std::vector <int> vetorOriginal = gerarVetorDesordenado(n);
    std::vector <long long int> tempo;

        for(int m = 0; m < 5; m++){

            std::vector vetorCopia = vetorOriginal;

            auto start = std::chrono::high_resolution_clock::now();

            algoritmoOrdenacao(vetorCopia);

            auto end = std::chrono::high_resolution_clock::now();

            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
            tempo.push_back(duration.count());
        }

        long long int media = 0;

        for(long long int a:tempo){

            media += a;

        }

        std::cout << "-Teste " << i+1 << ": "<< n << " | " << static_cast<double> (media)/tempo.size() << " microssegundos \n";

        n *= 10;

    }
}

