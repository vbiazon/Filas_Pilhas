#include <iostream>
#include "Pilha.h"
using namespace std;


void Pilha::Push(int x) { 
	if (index + 1 == Lim) { // verifica se o valor do topo da pilha + 1 elemento é igual ao limite do array
		cout << "Pilha cheia" << endl; //se sim, imprime indicando pilha cheia
	}
	else{ //se a pilha nao estiver cheia
	index++; //incrementa a posicao do topo
	Vetor[index] = x; //insere elemento
	}
}
int Pilha::Pop() {
	if (index >= 0) { //verifica se a pilha nao esta vazia
		int mem; //define memoria auxiliar
		mem = Vetor[index]; //armazena o valor do elemento na memoria auxilia
		Vetor[index] = 0; //zera o elemento
		index--; //decrementa a posicao do topo
		return mem; //retorna valor armazenado

	}
	else {
		cout << "Pilha Vazia" << endl; // se estiver vazia imprime Pilha vazia
		return 0;
	}
}

int Pilha::Top() { 
	if (index >= 0) { //se houverem elementos na pilha
		return Vetor[index]; //retorna o valor do primeiro elemento no topo
	}
	else {
		cout << "Pilha vazia" << endl; // se nao retorna pilha vazia
	}
}