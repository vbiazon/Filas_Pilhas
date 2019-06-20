#pragma once
class Fila
{
#define Lim 100 // define limite do array
public:
	void Enqueue(int x); //funcao enfileirar elemento x
	int Dequeue(); // funcao desenfileirar
	bool FilaVazia(); //funcao verifica fila vazia
	int ValorFrente(); //funcao mostra o valor na frente da fila
private:
	int Vetor[Lim] = { 0 }; //definicao e inicializacao do array dos elementos
	int indexIn = 0; // Index da frente da fila
	int indexOut = 0; //Index do fim da fila
	int PosOcup = 0; // armazena quantidade de posicoes ocupadas na fila
};

