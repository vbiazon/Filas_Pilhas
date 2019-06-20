#include "Fila.h"
#include <iostream>

using namespace std;

// Configuracao de fila wrapped around

bool Fila::FilaVazia() {
	if (PosOcup == 0) { //se a quantidade de posicoes ocupadas for 0 retorna True
		return true;
	}
	else { // se nao retorna False
		return false;
	}
}

int Fila::ValorFrente() { 
	if (not(FilaVazia())) { //se a fila nao estiver vazia, retorna o valor do elemento na frente da fila
		return Vetor[indexIn - 1];
	}
	else { // se estiver retorna o texto Nao ha elementos na fila
		cout << "Nao ha elementos na fila" << endl; 
	}
}

void Fila::Enqueue(int x) {
	if (PosOcup == Lim) { //se a quantidade de posicoes ocupadas for igual ao limite, retorna Fila cheia
		cout << "Fila cheia" << endl;
	}
	else if(indexIn + 1 == Lim){ // se o index de entrada chegar no final da fila ele volta ao inicio e comeca de novo
		indexIn = 0; // reinicializa o index da frente da fila
		Vetor[indexIn] = x; //guarda o elemento
		PosOcup++; //incrementa numero de posicoes ocupadas
	}
	else { // se nao
		Vetor[indexIn] = x; //insere elemento na fila
		indexIn++; //incrementa index do inicio da fila
		PosOcup++; //incrementa numero de posicoes ocupadas
	}
}

int Fila::Dequeue() {
	int mem = 0; //inicializa memoria auxiliar
	if(PosOcup <= 0){ //se o numero de posicoes ocupadas for menor ou igual a 0
	indexOut = 0; //reinicializa index de fim da fila
	indexIn = 0; //reinicializa index de inicio da fila
	cout << "Fila Vazia" << endl; // imprime texto fila vazia
	return 0;
	}
	else if (indexOut + 1 == Lim and PosOcup > 0) { //se o proximo elemento é o limite da fila e há elementos na fila
		indexOut = 0; //reinicializa index do fim da fila
		mem = Vetor[indexOut]; //guarda elemento na memoria auxiliar
		Vetor[indexOut] = 0; //zera posicao atual do fim da fila
		PosOcup--; //decrementa numero de posicoes ocupadas
		return mem; //retorna valor do elemento retirado
	}
	else if (indexOut + 1 >= 0 and PosOcup > 0) { //se o proximo elemento nao é o limite da fila e há elementos na fila

		mem = Vetor[indexOut]; //guarda elemento na memoria auxiliar
		Vetor[indexOut] = 0; //zera posicao atual do fim da fila
		PosOcup--; //decrementa numero de posicoes ocupadas
		indexOut++; //incrementa index do fim da fila
		return mem; //retorna valor do elemento retirado
		}

}