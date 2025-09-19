#ifndef MEDIRTEMPO_H
#define MEDIRTEMPO_H
#include <iostream>
#include <vector>
#include <functional>

void measureSearch(std::function<int(const std::vector <int> &vector, int find)> algoritmoBusca, std::string nomeDaBusca);

#endif