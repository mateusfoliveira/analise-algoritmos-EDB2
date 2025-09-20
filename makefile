Sistema: main.o medirTempo.o gerarVetor.o algoritmosOrdenacao.o algoritmosBusca.o
	g++ main.o medirTempo.o gerarVetor.o algoritmosOrdenacao.o algoritmosBusca.o -o programa_analise

Main: main.cpp
	g++ main.cpp -c  

Medir: medirTempo.cpp
	g++ medirTempo -c 

GerarVetor: gerarVetor.cpp
	g++ gerarVetor.cpp -c 

Ordenacao: algoritmosOrdenacao.cpp
	g++ algoritmosOrdenacao -c

Busca: algoritmosBusca.cpp
	g++ algoritmosBusca.cpp -c

Remove: 
	rm *.o medir