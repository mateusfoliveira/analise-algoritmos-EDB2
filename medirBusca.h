#ifndef MEDIRBUSCA_H
#define MEDIRBUSCA_H
#include <vector>
#include <functional>

void measureSearch(std::function<int(const std::vector <int> &vector, int find)> algoritmoBusca, std::string nomeDaBusca);

#endif