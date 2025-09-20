# Análise Empírica de Complexidade de Algoritmos

###Programa desenvolvido em C++ para matéria de **Estrutura de Dados Básica 2**.### 
O objetivo do trabalho era criar um software capaz de avaliar empiricamente o tempo de execução de diferentes algoritmos de busca e ordenação e a partir dos dados coletados, comparar o comportamento observado com funções de complexidade teórica conhecidas (Big-O) para validar a teoria na prática.

## ⚙️ Algoritmos Analisados

Foram analisados quatro algoritmos distintos:

* **Busca Sequencial** - Complexidade Teórica: $O(n)$ [cite: 59]
* **Busca Binária** - Complexidade Teórica: $O(\log n)$ [cite: 60]
* **Insertion Sort** - Complexidade Teórica (Caso Médio): $O(n^2)$ [cite: 61]
* **Merge Sort** - Complexidade Teórica: $O(n \log n)$ [cite: 62]

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++ [cite: 53]
* **Ambiente:** Windows 10 com WSL (Subsistema do Windows para Linux) [cite: 52]
* **Compilador:** g++
* **Bibliotecas Padrão:**
    * `<chrono>`: Para medição precisa do tempo de execução[cite: 55].
    * `<random>`: Para a geração de vetores com entradas aleatórias[cite: 55].
    * `<functional>`: Para a modularização e passagem de funções como parâmetro[cite: 56].

## 🚀 Como Executar

1.  **Clone o repositório:**
    ```bash
    git clone [https://github.com/mateusfoliveira/analise-algoritmos-EDB2.git](https://github.com/mateusfoliveira/analise-algoritmos-EDB2.git)
    cd analise-algoritmos-EDB2
    ```

2.  **Compile o projeto:**
    Para compilar, basta utilizar o makefile com o comando:
    ```bash
    make
    ```

3.  **Execute o programa:**
    A execução gerará a saída com os tempos de execução para cada algoritmo no terminal.
    ```bash
    ./programa_analise
    ```

## 🧬 Como Incluir um Novo Algoritmo

O projeto foi estruturado de forma modular para facilitar a adição de novos algoritmos para análise. Para incluir um novo algoritmo, siga os passos abaixo:

1.  **Implementação:** Adicione a função do seu novo algoritmo ao arquivo `.cpp` correspondente (ex: `algoritmos.cpp`). A assinatura da função deve seguir o padrão esperado:
    * Para **ordenação**: `void seuAlgoritmo(std::vector<int>& vetor)`
    * Para **busca**: `int seuAlgoritmo(const std::vector<int>& vetor, int valor)`

2.  **Declaração:** Adicione o protótipo da sua função no arquivo de cabeçalho (`.h`) para que ela seja visível para o `main.cpp`.

3.  **Medição:** No arquivo `main.cpp`, adicione uma chamada para a função de medição apropriada, passando sua nova função e um nome para exibição.
    ```cpp
    // Exemplo para um novo algoritmo de ordenação
    measureOrdenation(meuNovoSort, "Meu Novo Sort");
    ```

## 📊 Resultados

A análise empírica confirmou com sucesso as complexidades teóricas para todos os algoritmos estudados. 
