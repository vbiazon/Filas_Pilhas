#pragma once
class Pilha
{
#define Lim 100 // limite do tamanho do array
public:
	void Push(int x); // funcao inserir elemento na pilha
	int Pop(); // funcao retirar elemento da pilha
	int Top(); // funcao mostrar elemento no topo da pilha
private:
	int Vetor[Lim] = {0}; // array de armazenamento dos elementos
	int index = -1; // index de contagem da posicao do topo da pilha
};

